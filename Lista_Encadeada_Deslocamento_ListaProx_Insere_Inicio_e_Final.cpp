#include<iostream>
using namespace std;

struct nodo {
   int info;
   struct nodo* prox; 
};

int main() {
  
  int count=0;
  nodo *lista, *link=NULL;
  
 //Insere no inicio
   
  lista=new nodo;
  lista->info=33;
  lista->prox=link;
  link=lista;
  count++;
  
  lista=new nodo;
  lista->info=89;
  lista->prox=link;
  link=lista;
  count++;
  
  lista=new nodo;
  lista->info=71;
  lista->prox=link;
  link=lista;
  count++;
  
  lista=new nodo;
  lista->info=99;
  lista->prox=link;
  link=lista;
  count++;
  
  lista=new nodo;
  lista->info=54;
  lista->prox=link;
  link=lista;
  count++;
  
   
 //Insere no fim
   
  nodo *novo=new nodo, *aux;
  
    aux=lista;
    while(aux->prox)
    aux=aux->prox;
    aux->prox=novo;
    novo->info=100;
    novo->prox=NULL;
    novo=lista;aux=lista;
    count++;
    
    
  novo=new nodo, *aux;
  
    aux=lista;
    while(aux->prox)
    aux=aux->prox;
    aux->prox=novo;
    novo->info=234;
    novo->prox=NULL;
    novo=lista;aux=lista;  
    count++;
    
    
  novo=new nodo, *aux;
  
    aux=lista;
    while(aux->prox)
    aux=aux->prox;
    aux->prox=novo;
    novo->info=403;
    novo->prox=NULL;
    novo=lista;aux=lista;  
    count++;
  
  novo=new nodo, *aux;
  
    aux=lista;
    while(aux->prox)
    aux=aux->prox;
    aux->prox=novo;
    novo->info=200;
    novo->prox=NULL;
    novo=lista;aux=lista;  
    count++;
    
  novo=new nodo, *aux;
  
    aux=lista;
    while(aux->prox)
    aux=aux->prox;
    aux->prox=novo;
    novo->info=185;
    novo->prox=NULL;
    novo=lista;aux=lista; 
    count++;
    
    
  //Exibe 
    
  for(int x=1;x<=count;x++)
  {
    cout<<"\n"<<x<<"\t"<<lista->info;
    lista=lista->prox;
  }
  
  system("pause");
  return 0;
}
