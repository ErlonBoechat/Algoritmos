#include<iostream>
#define TAM 5
using namespace std;

void empilha(int p[], int &t, int v);
int desempilha(int[], int &t, int &v);
void acessoTopo(int p[], int &t);
void situacaoPilha(int p[], int &t);

int main()
{
   int op, val, topo=-1, pilha[TAM], resp;

   do
   {
      system("cls");
      //system("color b9");
      system("color 46");
      cout<<"\nPilha (LIFO - Last In - First Out)\n\n";
      cout<<"\n1 - Inserir um valor na pilha";
      cout<<"\n2 - Remover um valor da pilha";
      cout<<"\n3 - Mostrar o elemento do topo da pilha";
      cout<<"\n4 - Mostrar situacao da pilha";
      cout<<"\n5 - Sai";
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
                     cout<<"\nVAlor removido: "<<val;
                  break;                         
      }

   }while(val!=-2);


}

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

void acessoTopo(int p[], int &t)
{
   if(t==-1)
      cout<<"\nAtencao! Pilha vazia\n";
   else
      cout<<"\nElemento do topo da pilha: "<<p[t];
}

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
