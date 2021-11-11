#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<string>
#include<cstdlib>
using namespace std;

//nó ou nodo
struct nodo
{
   int info;
   struct nodo* prox;   
};

//inserir
nodo* insereFrente(nodo* ptr, int valor); 
nodo* insereFim(nodo* ptr, int valor);

//exibir
void exibe(nodo* ptr);

//remover
nodo* removeFrente(nodo* ptr);
nodo* removeFim(nodo* ptr);

//alterar
void substituiNo(nodo* ptr, int posicao, int novoValor);

int buscaSequencial(nodo* ptr, int valor);

int contaNos(nodo* ptr);
void libera(nodo* ptr);

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int c,op,valor,pos,nvalor,resp;
 
   nodo* lista=NULL;

   do
   {
      system("cls");
      system("color f1");
  
      cout<<"< < < Alocacao Dinamica < < <";

      cout<<"\n 1 - Insere na Frente da Lista ";
      cout<<"\n 2 - Insere no Fim da Lista \n";
      cout<<"\n 3 - Remove na Frente da Lista \n";
      cout<<"\n 4 - Remove no Fim da Lista \n";
      cout<<"\n 5 - Exibe Lista ";
      cout<<"\n 6 - Substitui Nó da Lista ";
      cout<<"\n 7 - Conta os Nós da Lista ";
      cout<<"\n 8 - Busca na Lista ";
      cout<<"\n 9 - Libera Lista ";
      cout<<"\n 10 - Sai ";
      cout<<"\n\n Opção: ";
      cin>>op;

      system("cls");
      system("color 1f");

     switch(op)
     {
        case 1: 
                 cout<<"\nInserir na frente: ";        
                 cin>>valor;
                 lista=insereFrente(lista,valor);
                 break;

        case 2:  
                 cout<<"\nInserir no final: ";
                 cin>>valor;
                 lista=insereFim(lista,valor);
                 break;

        case 3: 
                 if(!lista)
                    cout<<"\nNada a remover, Fila vazia";
                 else
                 {
                    lista=removeFrente(lista);
                    cout<<"\nPrimeiro elemento da Fila removido\n";
                 } 
                 break;

        case 4:
                 if(!lista)
                    cout<<"\nNada a remover, Fila vazia";
                 else
                 {
                    lista=removeFim(lista);
                    cout<<"\nÚltimo elemento da Fila removido";
                 } 
                 break;

        case 5:
                 if(!lista)
                    cout<<"\nfila vazia";
                 else
                 {
                    exibe(lista);                       
                 }                     
                 break;

        case 6: 
                 if(!lista)
                    cout<<"\nFila vazia";
                 else
                 {
                    cout<<"\nQual a posição do nó? ";
                    cin>>pos;

                    while(pos>contaNos(lista))
                    {
                       cout<<"\nPosição inválida\n";
                       cout<<"Qual a posição do nó?";
                       cin>>pos;  
                    }
           
                    cout<<"\nQual o novo valor? ";
                    cin>>nvalor;

                    substituiNo(lista,pos,valor);
                    cout<<"\nValor substituído"; 
                 }
                 break;

        case 7:   
                 if(!lista)
                    cout<<"\nFila vazia";
                 else
                 {
                    cout<<"\nTotal de nós: "<<contaNos(lista); 
                 }      
                 break;

        case 8:
                 if(!lista)
                    cout<<"\nFila vazia\n";
                 else
                 {
                    cout<<"\nQual o valor de procura? ";
                    cin>>valor;
                  
                    resp=buscaSequencial(lista,valor);
 
                    if(resp==1)
                       cout<<"\nValor encontrado na lista\n";
                    else
                       cout<<"\nValor não encontrado na lista";

                 } 
                 break;

        case 9: 
                 if(!lista)
                    cout<<"\nTem elementos na Lista";
                 else
                 {
                    libera(lista);
                    cout<<"\nLiberando memória";  
                 }      
                 break;

        case 10:
                  cout<<"\nFechando Lista Encadeada\n";
                  break;

        default:
                  cout<<"\nOpção Inválida";
     }
     cout<<"\n\n";
     system("pause");

   } while(op!=10);
}

nodo* insereFrente(nodo* ptr, int valor)
{   
   nodo* temp=new nodo;
   
   if(!temp)
   {
      cout<<"\nNão foi possível fazer a alocação de memória\n";
      system("pause");
      exit(1);
   }
   temp->info=valor;
   temp->prox=ptr;
   return temp; 
}

nodo* insereFim(nodo* ptr, int valor)
{
   nodo* novo, *aux;
   novo=new nodo;
    
   if(!novo)
   {
      cout<<"\nNão foi possível fazer a alocação de memória\n";
      system("pause");
      exit(1);
   }
   novo->info=valor;
   novo->prox=NULL;
   
   if(!ptr)
      ptr=novo;
   else
   {
      aux=ptr;
      
      while(aux->prox)
         aux=aux->prox;
         aux->prox=novo;
   }
   return ptr;
}

void exibe(nodo* ptr)
{
   cout<<"\nListando\n";
   while(ptr)
   {
      cout<<"\n"<<ptr->info;
      ptr=ptr->prox;
   }
}

nodo* removeFrente(nodo* ptr)
{
   nodo* aux;
   aux=ptr;
   ptr=ptr->prox;
   delete aux;
   return ptr;
}

nodo* removeFim(nodo* ptr)
{
   nodo* aux, *ultimo;
   
   if(!ptr->prox)
   {
      delete ptr;
      ptr=NULL;
      return ptr;
   }
   else
   {
      aux=ptr;
      
      while(aux->prox->prox)//auxiliar caminha até apontar para o penúltimo nó
      
         aux=aux->prox;
         ultimo=aux->prox;
         delete ultimo;
         aux->prox=NULL;
         return ptr;
       
   }
}

void substituiNo(nodo* ptr, int posicao, int novoValor)
{
   int conta=1;
   
   while(conta!=posicao)
   {
      ptr=ptr->prox;
      conta++;
   }
   ptr->info=novoValor;
}

int contaNos(nodo* ptr)
{
   int conta=0;
   
   while(ptr)
   {
      conta++;
      ptr=ptr->prox;
   }
   return conta;
}

int buscaSequencial(nodo* ptr, int valor)
{
   while(ptr)
   {
      if(ptr->info==valor)
         return 1;
      ptr=ptr->prox; 
   }
   return 0;
}

void libera(nodo* ptr)
{
   delete ptr; ptr=0;    
}
