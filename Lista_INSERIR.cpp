#include <iostream>
using namespace std;

void insere(int codigo[],int &t, int tamanho);
void bar();

int main() {
    
    int tam, codigoProduto[5], op;
    
    tam=0;
    
    do{
        cout<<"\n1 - Inserir codigo na Lista";
        cout<<"\n";
        cout<<"\nOpcao: ";
        cin>>op;
        
        switch(op){
            case 1: insere(codigoProduto,tam,5);  
                  break;
        }
        
    }while(op!=5);


}

void insere(int codigo[], int &t, int tamanho)
{
   int prod;
  
   if(tamanho==0)

      cout<<"\nAtencao! Lista cheia\n";

   else
   {
      bar();
      cout<<"\nDigite codigo do produto a ser inserido: ";
      cin>>prod;
      codigo[t]=prod;
      t++;
   }
}

void bar()
{
    cout<<"----------------";
}