#include<iostream>
#include<locale>
using namespace std;

float num1, num2; // variáveis globais
void troca();
void dobra();

int main()
{
  cout<<"\nNumero 1: ";
  cin>>num1;
  cout<<"\nNumero 2: ";
  cin>>num2;
  cout<<"\n\n";
  cout<<"Inicialmente: "<<num1<<", "<<num2;
  troca();
  cout<<"\nDados a chamada de troca (): "<<num1<<", "<<num2;
  dobra();
  cout<<"\nDados a chamada de dobra (): "<<num1<<", "<<num2;
  cout<<"\n\n";
  //system("pause");
  return 0;
}
void troca()
{
  dobra(); //  Quando a função 'dobra' é chamada pela função main(), ela já encontra os valores dobrados e, então, os dobra novamente
  num1+=num2;
  num2=num1-num2;
  num1=num1-num2;
}
void dobra()
{
  num1*=2;
  num2*=2;
}
