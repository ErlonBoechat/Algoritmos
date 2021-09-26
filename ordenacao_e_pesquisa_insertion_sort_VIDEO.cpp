#include<iostream>
#include<locale.h> // setlocale
#include<stdlib.h> //system
#include<string> //textos em geral
using namespace std;

void insertionSort(int vet[],int tam);
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
  insertionSort(vetor,5);
  //=======================
  cout<<"\n";
  //Após a troca
  bar();
  cout<<"\nDepois da troca:\n";
  imprimirVetor(vetor,5);
  
}

void insertionSort(int vet[], int tam){
    int valueInsert;
    int posInsert;
    int i;
    //percorrer todos os números
    for(i=1;i<tam;i++){
        //selecione um valor a ser inserido
        valueInsert=vet[i];
        //selecione a posição onde o número deve ser inserido
        posInsert=i;
        cout<<"----------------------------------\n";
        imprimirVetor(vet,5);
        cout<<"----------------------------------\n";
        cout<<"Valor: "<<valueInsert<<endl;
        cout<<"Posição Inserção: "<<posInsert<<endl<<endl;
        
        //verifique se anterior n é > que valor a ser inserido
        while(posInsert>0&&vet[posInsert-1]>valueInsert){
            vet[posInsert]=vet[posInsert-1];
            posInsert--;
            imprimirVetor(vet,5);
        }
        
        if(posInsert!=i){
            cout<<"\tInsere: "<<valueInsert<<" na posição: "<<posInsert<<endl;
            vet[posInsert]=valueInsert;
        }
        imprimirVetor(vet,5);
        
        cout<<"\n\n";
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