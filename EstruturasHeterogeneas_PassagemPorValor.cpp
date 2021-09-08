#include<iostream>
using namespace std;

struct cad
{
  float a,b,c,d;
};

float maior2(float n1, float n2);

int main()
{
  cad numeros={23,69,13,62};
  cout<<"\nNumeros da estrutura";
  cout<<"\n"<<numeros.a<<"\t"<<numeros.b<<"\t"<<numeros.c<<"\t"<<numeros.d;
  cout<<"\n------------------------------------------";
  cout<<"\nO maior dos quatro: ";
  cout<<maior2(maior2(numeros.a,numeros.b),maior2(numeros.c,numeros.d));
  cout<<"\n\n\n";
  //system("pause");
  return (0);
  
}

float maior2(float n1, float n2)
{
  if(n1>n2)
  {
  return n1;
  }
  else 
  {
  return n2;
  }
}