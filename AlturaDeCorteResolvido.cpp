#include<iostream>
using namespace std;

int contaMaioresQueH(double [], int tam, double altP);

int main () 
{
double alturas[10], procuraAltura;

for(int x=0; x<10; x++)
  {
     cout<<"\nAltura "<<x+1<<": ";
     cin>>alturas[x];  
  }
  
cout<<"\n\nQual a altura minima? ";
cin>>procuraAltura;

cout<<"\nRelação das Alturas\n";
for(int x=0; x<10; x++)
  {
     cout<<alturas[x]<<"\t";
  }

     cout<<"\n\nTotal das alturas maiores que a mínima: "<<contaMaioresQueH(alturas, 10, procuraAltura);
     cout<<"\n\n";

system("pause");
return 0;

}

int contaMaioresQueH(double alts[], int tam, double altP)
{
int conta=0;

   for(int x=0; x<tam; x++)
     {
        if (alts[x]>altP)
        conta++;
     }
     
return conta;
}
