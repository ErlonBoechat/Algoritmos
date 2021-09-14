#include<iostream>
using namespace std;

struct manipulaNumeros
{
  int contaAlgarismos(int num)
  {
    int cont=0;
    while(num>0)
    {
      cont++;
      num/=10;
    }
    return cont;
  }

  void quocresto(int a, int b)
  {
  int aux;
  if(a<b){aux=a;a=b;b=aux;}
  cout<<"\nQuociente: "<<a/b;
  cout<<"\nResto: "<<a%b;
  }
};

int main()
{
  int n1,n2;
  manipulaNumeros num;
  cout<<"\nDigite um numero inteiro: "; 
  cin>>n1;
  cout<<"\nTotal de algarismos: "<<num.contaAlgarismos(n1);
  cout<<"\n\nDigite um numero inteiro: "; 
  cin>>n1;
  cout<<"\nDigite outro numero inteiro: "; 
  cin>>n2;
  num.quocresto(n1,n2);
  cout<<"\n\n";
  system("pause");

}