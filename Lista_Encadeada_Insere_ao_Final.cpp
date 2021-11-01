#include<iostream>
#include<cstdlib>
using namespace std;

int main ()
{
   struct nodo
   {
      int num;
      struct nodo* prox;
   };

   //criando o no1
   nodo* no1=new nodo;
   no1->num=23;
   no1->prox=NULL;

   //criando o no2
   nodo* no2=new nodo;
   no1->prox=no2;
   no2->num=13;
   no2->prox=NULL;

   //exibindo
   cout<<"\nValor do primeiro no: "<<no1->num;
   cout<<"\nValor do segundo no: "<<no2->num;
   cout<<"\nValor do endereco do primeiro no: "<<no1;
   cout<<"\nValor do endereco do segundo no: "<<no2;
   cout<<"\nEndereço apontado por no1: "<<no1->prox;
   cout<<"\nEndereço apontado por no2: "<<no2->prox;

   //liberando
   delete no1; no1=0;
   delete no2; no2=0;

   cout<<"\n\n";
   system("pause");
}