#include<iostream>
using namespace std;

struct nodo {
   int info;
   struct nodo* prox; 
};

int main() {
  
  nodo *aux, *ultimo;
  nodo *lista, *link=NULL;
  
  lista=new nodo;
  lista->info=33;
  lista->prox=link;
  link=lista;
  
  lista=new nodo;
  lista->info=89;
  lista->prox=link;
  link=lista;
  
  lista=new nodo;
  lista->info=71;
  lista->prox=link;
  link=lista;
  
   lista=new nodo;
  lista->info=99;
  lista->prox=link;
  link=lista;
  
   lista=new nodo;
  lista->info=54;
  lista->prox=link;
  link=lista;
  
  aux=lista;
  
  while(aux)
  {      aux=aux->prox;
         ultimo=aux->prox;
         lista=aux->prox;
         ultimo=aux->prox;
         
         //delete ultimo;
         //aux->prox=NULL;
  } 
  
  aux=lista;
  lista=lista->prox;
  delete aux;
  

  return 0;
}
