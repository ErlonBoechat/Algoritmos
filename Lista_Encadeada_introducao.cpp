#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
   struct nodo 
   {
      int num;
      struct nodo* prox;
   };
   
   //criando o no
   nodo* no1=new nodo;
   //atribuindo valor ao elemento
   no1->num=23;
   //atribuindo 0 ou NULL ao campo 'proxima celula'
   no1->prox=NULL;
   //exibindo
   cout<<"\nValor do no1: "<<no1->num;
   //liberando
   delete no1; no1=0;
   cout<<"\n\n";
   system("pause");
}