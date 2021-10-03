#include<iostream>
using namespace std;

void insere(int codigo[],int &t, int tamanho);
void exibe(int codigo[],int t);
void elemento(int codigo[],int t);

int main()
{
   int tam, codigoProduto[5], op;

   //inicialização
   
   tam=0;

   do
   {
       //system("cls");  
       cout<<"\nMenu - LISTA \n";   
       cout<<"\n0 - Reiniciar a Lista";
       cout<<"\n1 - Inserir codigo na Lista";
       cout<<"\n2 - Exibir Lista";
       cout<<"\n3 - Exibe tamanho da Lista";
       cout<<"\n4 - Exibe um elemento da Lista";
       cout<<"\n5 - Sair";
       cout<<"\n";
       cout<<"\nOpcao: ";
       cin>>op;
       //system("cls");

       switch(op)
       {
          case 0: //reinicialização
                  tam =0;
                  break;

          case 1: insere(codigoProduto,tam,5);  
                  break;
          
          case 2: exibe(codigoProduto,tam);
                  break;
 
          case 3: cout<<"\nTamanho da Lista: "<<tam;
                  break;

          case 4: elemento(codigoProduto,tam);
                  break;

          case 5: cout<<"\nFinalizando o programa da Lista\n";
                  break;

          default: cout<<"\nOpcao invalida\n";
 
       } 
       cout<<"\n\n;"; //system("pause");
       
   }while(op!=5);
}

void insere(int codigo[], int &t, int tamanho)
{
   int prod;
  
   if(tamanho==0)

      cout<<"\nAtencao! Lista cheia\n";

   else
   {
      cout<<"\nDigite codigo do produto a ser inserido: ";
      cin>>prod;
      codigo[t]=prod;
      t++;
   }
}

void exibe (int codigo[], int t)
{
   int x;
  
   if(t==0)
      cout<<"\nAtenção! Lista vazia\n";

   else
      cout<<"\nRelacao dos Codigos\n";

      for(x=0; x<t; x++)
         cout<<"\n"<<codigo[x];
}

void elemento(int codigo[], int t)
{
   int prod, posicao;
   
   if(t==0)
      cout<<"\nAtencao! Lista vazia\n";  
    
   else
   {
      cout<<"\nQual a posicao que deseja?";
      cin>>posicao;
      posicao--;
     
      if(posicao>=t)
         cout<<"\nAtencao! Nehum codigo armazenado ou posicao";
      else
         cout<<"\nCodigo: "<<codigo[posicao]<<"\n";   
   } 
}
