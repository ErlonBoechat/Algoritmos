#include<iostream>
#include<cstring>
using namespace std;

int main ()
{
   struct prod
   {
      char nomeProd[21];
      float valor;
   }produto1, produto2, aux;
   
   cout<<"\nNome do primeiro produto: ";
   cin.get(produto1.nomeProd,21);
   cout<<"\nPreço: ";
   cin>>produto1.valor;
   cout<<"\n\n";
   cout<<"--------------------------------------------\n";
   cout<<"\nProduto: "<<produto1.nomeProd<<" * Preço: "<<produto1.valor;
}