#include <iostream>
#include <locale>
using namespace std;

void dobro(double v1[], double v2[], int tam);

int main() {

double vetorUm[50], vetorDois[50];
int num;

cout<<"\nDigite o tamanho dos vetores: ";
cin>>num;

cout<<"\n\n*********************\n";

for(int x=0; x<num; x++)
{
cout<<x+1<<"º valor do Vetor 1: ";
cin>>vetorUm[x];
}

cout<<"\n\n*********************\n";

for(int x=0; x<num; x++)
{
cout<<x+1<<"º valor do Vetor 2: ";
cin>>vetorDois[x];
}

dobro(vetorUm, vetorDois, num);

cout<<"\n\n*********************\n";
cout<<"\n\n*********************\n";

for(int x=0; x<num; x++)
{
cout<<x+1<<"º valor do Vetor 1: "<<vetorUm[x]<<endl;
}

cout<<"\n\n*********************\n";

for(int x=0; x<num; x++)
{
cout<<x+1<<"º valor do Vetor 2: "<<vetorDois[x]<<endl;

}


}

    void dobro(double v1[], double v2[], int tam)
{
  for(int x=0; x<tam; x++)
    {
       v2[x]=v1[x]*2;
    }
}