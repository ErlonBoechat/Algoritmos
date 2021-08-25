// Construa um algoritmo com uma função que receba o endereço de um vetor que
// armazena alturas de um grupo de atletas, seu tamanho e a 
// altura mínima de corte, retornando a quantidade de atletas 
// com a altura superior ou igual ao corte.

// Algoritmo resolvido

#include <iostream>
using namespace std;

double contaMaioresQueH (double alts[], int tam, double altP);

int main() {
int num;
double corte;
double altura[1000];
cout<<"\nQtde de registros: ";
cin>>num;
cout<<"\nAltura de corte: ";
cin>>corte;
for(int x=0; x<num; x++)
    {
      cout<<"\nAltura "<<x+1<<": ";
      cin>>altura[x];
    }
cout<<"\n\n";
cout<<"\nAlturas registradas: ";
for(int x=0; x<num; x++)
   {
      cout<<altura[x]<<"\t";   
   }
cout<<"\n";
cout<<"\nIgual ou acima da altura: "<<contaMaioresQueH(altura,num,corte);

    return 0;
}

double contaMaioresQueH(double alts[], int tam, double altP)
{
int sup=0;

for(int x=0; x<=tam; x++)
if (alts[x]>=altP)
    {
      sup+=1;
    }
 return sup;
}
