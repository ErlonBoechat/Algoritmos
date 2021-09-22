#include<iostream>
using namespace std; 

void bolha(int vet[], float h[], int tam);
void barra();

int main (){

  int x, codigo[5];
  float alt[5];
  
  for(x=0;x<5;x++)
  {
    cout<<"\nCodigo do atleta: ";
    cin>>codigo[x];
    cout<<"\nAltura: ";
    cin>>alt[x];
    barra();
  }

  bolha(codigo, alt, 5);
  cout<<"\n";
  cout<<"\nCodigo\tAltura\n";
  for(x=0;x<5;x++)
    cout<<"\n"<<codigo[x]<<"\t"<<alt[x];
    cout<<"\n";
  system("pause");
}

void bolha(int vet[], float h[], int tam)
{
  int i,j, aux;
  float auxf;
  
  for(i=0;i<tam-1;i++)
    for(j=tam-1;j>i;j--)
      if(vet[j]<vet[j-1])
      {
        aux=vet[j];
        vet[j]=vet[j-1];
        vet[j-1]=aux;
        
        auxf=h[j];
        h[j]=h[j-1]; 
        h[j-1]=auxf;   
      }

}

void barra()
{
  int x;
  for(x=1; x<=20; x++)
  cout<<"-";
}