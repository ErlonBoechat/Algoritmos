#include<iostream>
using namespace std;
void insercao(int vet[], int tam);

int main(){
int x, vet[]={13,23,3,8,1};
system("cls");
cout<<"\nAntes da chamada da funcao:\n\t\t";

for(x=0;x<5;x++)
 cout<<vet[x]<<"\t";
cout<<"\n\n";

insercao(vet,5);
cout<<"\nDepois da chamada da funcao:\n\t\t";

for(x=0;x<5;x++)
  cout<<vet[x]<<"\t";
cout<<"\n\n";
system("pause");
}

void insercao(int vet[], int tam)
{
  int i,j, aux;
  for (i=1;i<tam;i++)
  {
    aux = vet[i];
    for(j=i; j>0 && aux <vet[j-1];j--)

      vet[j]=vet[j-1];
      vet[j]=aux;  
   }
}

/*
Output:

Antes da chamada da funcao:
		13	23	3	8	1	


Depois da chamada da funcao:
		1	3	8	13	23	
*/
 
