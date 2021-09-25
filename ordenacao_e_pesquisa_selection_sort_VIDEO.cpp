#include<iostream>
#include<locale.h> // setlocale
#include<stdlib.h> //system
#include<string> //textos em geral
using namespace std;

void selectionSort(int vet[],int tam);
void imprimirVetor(int vet[],int tam);
void bar();

int main (){
setlocale(LC_ALL, "Portuguese");

  int vetor[5]={13,23,3,8,1};
  int i;
  //Antes da troca
  cout<<"\nAntes da troca:\n";
  imprimirVetor(vetor,5);
  bar();
  //=======================
  //selection sort
  //=======================
  selectionSort(vetor,5);
  //=======================
  cout<<"\n";
  //Após a troca
  bar();
  cout<<"\nDepois da troca:\n";
  imprimirVetor(vetor,5);
  
}

void selectionSort(int vet[], int tam){
    int indexMin,i,j;
    //percorrer todos os números
    for(i=0;i<tam-1;i++){
        //define o elemento atual como o menor
        indexMin=i;
        //encontra o menor valor após i+1
        for(j=i+1;j<tam;j++){
            if(vet[j]<vet[indexMin]){
                indexMin=j;
            }
        }
        cout<<"\nTroca: "<<vet[i]<<" <= "<<vet[indexMin];
        
        if(indexMin!=i){
            //troca os números
            int temp=vet[indexMin];
            vet[indexMin]=vet[i];
            vet[i]=temp;
        }
    }
}

void imprimirVetor(int vet[],int tam){
    int i;
    cout<<vet[0];
    //após a troca
    for(i=1;i<5;i++){
        cout<<", "<<vet[i];
    }
    cout<<endl;
}
void bar()
{
    cout<<"----------------";
}
