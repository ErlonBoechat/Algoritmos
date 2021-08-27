//Constua uma função que receba endereços de dois vetores
//e o tamanho deles. A função deverá gerar o vetor dobro

//Ajustar

#include <iostream>
#include <locale>
using namespace std;

void dobro(double v1[], double v2[], int tam);

int main() {

double vetorUm[5]{11,12,13,14,15}, vetorDois[5]{16,17,18,19,20};
int num=5;

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
