#include<iostream>
#include<cstring>
using namespace std;

struct data
{
   int dia, mes, ano;
};

int main()
{
   data dataNasc, *ptr;
   int d;

   cout<<"\nDigite data de nascimento no formato ddmmaa: ";
   cin>>d;
   ptr=&dataNasc;
   ptr->dia=d/10000;  
   ptr->mes=(d/100)%100;
   ptr->ano=d%100;
   cout<<"\n\nSua data de nascimento "<<ptr->dia<<"/"<<ptr->mes<<"/"<<ptr->ano;
   cout<<"\n\n";
   system("pause");
}