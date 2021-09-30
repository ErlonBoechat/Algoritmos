#include<iostream>
using namespace std; 

void insere(int codigo[], int &t, int tamanho)
{
   int prod;
   
   if(tamanho==t)
      cout<<"\nAtenção! Lista cheia\n";
   else
   {
      cout<<"\nDigite o codigo do produto a ser inserido: ";
      cin>>prod;
      codigo[t]=prod;
      t++;         
   }
}


int main() {
int codigoProduto[]={2233},tam=10;
insere(codigoProduto,tam,5);

}