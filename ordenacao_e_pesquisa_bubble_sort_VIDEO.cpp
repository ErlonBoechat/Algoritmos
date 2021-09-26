#include<iostream>
#include<locale.h> // setlocale
#include<stdlib.h> //system
#include<string> //textos em geral
using namespace std;

void bubbleSort(int vet[],int tam);
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
  //bubble sort
  //=======================
  bubbleSort(vetor,5);
  //=======================
  cout<<"\n";
  //Após a troca
  bar();
  cout<<"\nDepois da troca:\n";
  imprimirVetor(vetor,5);
  
}

void bubbleSort(int vet[], int tam){
    int temp;
    int i,j;
    bool continuarTroca=false;
    
    //percorrer todos os números
    for(i=0;i<tam-1;i++){
        continuarTroca=false;
        //loop through numbers falling ahead
        for(j=0;j<tam-1-i;j++){
            cout<<"------------------\n";
            imprimirVetor(vet,5);
            cout<<"Comparando: "<<vet[j]<<" com :"<<vet[j+1]<<endl;
            
            //troca o número mais alto
            if(vet[j]>vet[j+1]){
                temp=vet[j];
                vet[j]=vet[j+1];
                vet[j+1]=temp;
                
                continuarTroca=true;
            }
            imprimirVetor(vet,5);
            cout<<"\n\n";
        }
        
        //se estiver tudo ordenado
        if(!continuarTroca){
            break;
        }
    }
}

void imprimirVetor(int vet[],int tam){
    int i;
    cout<<vet[0];
    //após a troca
    for(i=1;i<tam;i++){
        cout<<", "<<vet[i];
    }
    cout<<endl;
}
void bar()
{
    cout<<"----------------";
}