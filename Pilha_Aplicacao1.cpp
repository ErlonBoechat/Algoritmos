#include<iostream>
#define TAM 5
using namespace std;

void empilha(int p[], int &t, int v);
int desempilha(int[], int &t, int &v);
void acessoTopo(int p[], int &t);
void situacaoPilha(int p[], int &t);
void imprimirPilha(int p[], int t, int v);


int main()
{
   int op, val, topo=-1, pilha[TAM], resp;

   do
   {
      system("cls");
      //system("color b9");
      system("color 47");
      cout<<"\nPilha (LIFO - Last In - First Out)\n\n";
      cout<<"\n1 - Inserir um valor na pilha";
      cout<<"\n2 - Remover um valor da pilha";
      cout<<"\n3 - Mostrar o elemento do topo da pilha";
      cout<<"\n4 - Mostrar situacao da pilha";
      cout<<"\n5 - Imprimir pilha";
      cout<<"\n6 - Sai";
      cout<<"\n\nOpcao: ";
      cin>>op;
      system("cls");

      switch(op)
      {
          case 1: cout<<"\nDigite o valor a ser empilhado: ";
          cin>>val;
          empilha(pilha,topo,val);
          break;
  
          case 2: resp=desempilha(pilha, topo, val);         
                  
                  if(resp==0)
                     cout<<"\nAtencao! Lista vazia."; 
                  else
                     cout<<"\nValor removido: "<<val;
                  break; 
		
		  case 3: acessoTopo(pilha,topo);
                  break;
 
          case 4: situacaoPilha(pilha,topo);
                  break;
          
          case 5: imprimirPilha(pilha,topo,val);                      
                  break;
          
          case 6: cout<<"\nPrograma basico de Pilha";                       
                  break;
                  
          default: cout<<"\nOpção Invalida!";
      }
      cout<<"\n\n"; system("pause"); 

   }while(op!=5);		                          
}
//insere
void empilha(int p[], int &t, int v)
{
   if(t==TAM-1)
      cout<<"\nAtencao! Pilha cheia\n";
      else
      {
         t++; //atualiza o topo
         p[t]=v; //pilha recebe o valor
      }
}

//remove
int desempilha(int[], int &t, int &v)
{
   int p[t];
   
   if(t==-1)
      return 0;
   else
   {
      v=p[t]; //guarda o valor do topo
      t--; //atualiza o topo
      return 1;
   } 
}
//mostra o topo
void acessoTopo(int p[], int &t)
{
   if(t==-1)
      cout<<"\nAtencao! Pilha vazia\n";
   else
      cout<<"\nElemento do topo da pilha: "<<p[t];
}
//mostra a situacao da pilha
void situacaoPilha(int p[], int &t)
{
   
   if(t == -1)
      cout<<"\nATENCAO.Pilha Vazia\n";
   else if(t == TAM)
      cout<<"\nATENCAO.Pilha Cheia\n";
   else	
   {
      cout<<"\nTotal de elementos na pilha: "<<t+1<<"\n";
      cout<<"\n\nEspaco disponivel na pilha:"<<TAM-(t+1)<<"\n";
   }
}     

void imprimirPilha(int p[], int t, int v)
{
    int x;
    for(x=0;x<t;x++)
    cout<<p[v]<<"\n";
    t++;
}
