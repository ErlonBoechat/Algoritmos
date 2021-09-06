#include<iostream>
#define TAM 3
using namespace std;

int main()
{
  struct prodCad
  {
    int codigo;
    float precoCompra,precoVenda;    
  };
  prodCad produtos[TAM];
  int x, num;
  for(x=0; x<TAM; x++)     
  {
    cout<<"\nCódigo do Produto 0-10000: ";
    cin>>num;
    while(num<0 || num>10000)
    {
      cout<<"\nCodigo invalido";
      cout<<"\nCódigo do Produto 0-10000: ";
      cin>>num;
    }
    produtos[x].codigo=num;
    cout<<"\nPreco de compra: ";    
    cin>>produtos[x].precoCompra;
    produtos[x].precoVenda=produtos[x].precoCompra *1.6;
    
  }
  cout<<"\n\n";
  system("cls");
  cout<<"\n\n";
  cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++";
  cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++";
  cout<<"\n\nCodigo\t| Compra\t| Venda\n";  
  for(x=0; x<TAM; x++)
  cout<<"\n"<<produtos[x].codigo<<"\t| "<<produtos[x].precoCompra<<"\t| "<<produtos[x].precoVenda;
  cout<<"\n\n";
  cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++";
  system("pause");
}
