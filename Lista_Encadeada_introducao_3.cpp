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
   
   nodo* lista=new nodo; //criando primeiro no
   lista->num=23;
   lista->prox=NULL;

   lista->prox=new nodo; //criando segundo no
   lista->prox->num=13;
   lista->prox->prox=NULL;
   
   lista->prox->prox=new nodo; //criando terceiro no
   lista->prox->prox->num=15;
   lista->prox->prox->prox=NULL;
   
   lista->prox->prox->prox=new nodo; //criando quarto no
   lista->prox->prox->prox->num=10;
   lista->prox->prox->prox->prox=NULL;

//exibindo
   cout<<"\nValor do primeiro no: "<<lista->num;
   cout<<"\nValor do segundo no: "<<lista->prox->num;
   cout<<"\nValor do terceiro no: "<<lista->prox->prox->num;
   cout<<"\nValor do quarto no: "<<lista->prox->prox->prox->num;
   cout<<"\nValor do endereco do primeiro no"<<lista;
   cout<<"\nValor do endereco do segundo no"<<lista->prox;
   cout<<"\nValor do endereco do terceiro no"<<lista->prox->prox;
   cout<<"\nValor do endereco do quarto no"<<lista->prox->prox->prox; 

   //liberando
   delete lista;
   cout<<"\n\nEndereco armazenado na variavel lista, mesmo depois de delete: "<<lista;
   lista=0;
   cout<<"\nEndereco armazenado na variavel lista depois da atribuicao: "<<lista;
   
   cout<<"\n\n";
   system("pause");
}