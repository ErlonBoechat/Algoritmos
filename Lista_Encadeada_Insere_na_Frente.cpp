#include<iostream>
using namespace std;

struct nodo
{
   int num;
   struct nodo* prox;
};

int main()
{
   nodo *temp, *lista=NULL; // Declara temp que servirá para receber o novo nó e lista que é inicializada, visto que recebeu NULL
   
   //primeiro no
   temp=new nodo;
   temp->num=23;
   temp->prox=lista;
   lista=temp;
  
   //segundo no
   temp=new nodo;
   temp->num=23;
   temp->prox=lista;
   lista=temp;

   //terceiro no
   temp=new nodo;
   temp->num=15;
   temp->prox=lista;
   lista=temp;

   //terceiro no
   temp=new nodo;
   temp->num=18;
   temp->prox=lista;
   lista=temp;
 
   //listando
   cout<<"\nInserindo No na Frente - Listando um a um\n";
   cout<<"\nValor do 1º no: "<<lista->num;
   cout<<"\nValor do 2º no: "<<lista->prox->num;
   cout<<"\nValor do 3º no: "<<lista->prox->prox->num;
   cout<<"\nValor do 3º no: "<<lista->prox->prox->prox->num;
 
   //liberando
   delete lista; lista=0;
   cout<<"\n\n";
   system("pause");
}c