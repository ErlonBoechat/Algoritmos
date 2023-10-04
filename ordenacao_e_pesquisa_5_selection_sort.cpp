#include<iostream>
using namespace std;

void selecao(int vet[], int tam);

int main () {
int x, vet[]={155,76,23,9,12};
system("cls");

cout<<"Antes da chamada: ";

for(x=0;x<5;x++)
  cout<<"\t"<<vet[x]<<"\t";
cout<<"\n";
selecao(vet,5);
cout<<"\nDepois da chamada: ";

for(x=0;x<5;x++)
  cout<<"\t"<<vet[x]<<"\t";
system("pause");
return(0);
}

void selecao(int vet[], int tam)
{
  int j, i, aux, temp;
  for(i=0;i<tam-1;i++)
  {
    for(j=i+1;j<tam;j++)
    {
      aux=i;
      if(vet[aux]>vet[j])
        aux=j;
        temp=vet[aux];
        vet[aux]=vet[i];
        vet[i]=temp;
    }
  }
}
