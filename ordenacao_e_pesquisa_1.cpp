#include<iostream>
#include<locale>
using namespace std;

int main () {

  double vet[]={67.250,54.00}, aux;
  cout<<"\nAntes da Comparação\n";
  cout<<"\n"<<vet[0]<<"\t"<<vet[1];

  if(vet[0]>vet[1])
  {
    aux=vet[0];
    vet[0]=vet[1];
    vet[1]=aux;
  }
  cout<<"\n\nApos a comparacao\n";
  cout<<"\n"<<vet[0]<<"\t"<<vet[1];
  cout<<"\n\n";
  system("pause");
}