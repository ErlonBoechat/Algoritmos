#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<string>
#define MAX 5
using namespace std;

int comeco=0;
int tamanho=0;
int queue[MAX];

void enfileirar(int);
void desenfileirar(void);

int main()
{
   setlocale(LC_ALL, "Portuguese");
   
   int i;

   enfileirar(10);
   enfileirar(20);
   enfileirar(30);
   enfileirar(40);
   enfileirar(50);

   for(i=0;i<tamanho;i++)
   {
       cout<<queue[i]<<endl;   
   }
   
   desenfileirar();
   cout<<"\n\n";

   for(i=0;i<tamanho;i++)
   {
      cout<<queue[i]<<endl;
   }

   enfileirar(60);
   cout<<"\n\n";

   for(i=0;i<tamanho;i++)
   {
      cout<<queue[i]<<endl;
   }
}

void enfileirar(int elemento)
{
   int pos;

   if(tamanho==MAX)
      cout<<"\nFila cheia\n";
   else
   {
      pos=(comeco+tamanho)%MAX;
      queue[pos]=elemento;
      tamanho++;
   }
}

void desenfileirar(void)
{
   if(tamanho==0)
      cout<<"\nFila cheia\n";
   else
   {
      comeco++;
      tamanho--;
   }
}