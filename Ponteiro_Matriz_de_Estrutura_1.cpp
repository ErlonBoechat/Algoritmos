#include<iostream>
#include<cstring>
using namespace std;

struct dados 
{
   int matric;
   float sal;
};

int main ()
{
   int x, nfunc;
   cout<<"\nQuantos funcionarios? ";
   cin>>nfunc;
   cout<<"==================================\n";
   dados *ptr=new dados[nfunc];

   for(x=0;x<nfunc;x++)
   {
      cout<<"\nDigite a matricula do "<<x+1<<"º funcionario : ";
      cin>>ptr[x].matric;
      cout<<"\nDigite o salario : ";
      cin>>ptr[x].sal;
      cout<<"--------------------------";
   }
   system ("cls");
   cout<<"\nMatricula\tSalario\n";
   for(x=0;x<nfunc;x++)
   cout<<"\n"<<(ptr+x)->matric<<"\t"<<(ptr+x)->sal;
   cout<<"\n\n";
   system("pause");
}