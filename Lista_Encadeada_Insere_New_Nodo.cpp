#include<iostream>
using namespace std;

struct nodo
{
   int info;
   struct nodo* prox; 
};

int main()
{
    nodo *temp, *link=NULL;
    temp=new nodo;    
    temp->info=10;
    temp->prox=link;
    link=temp;
}