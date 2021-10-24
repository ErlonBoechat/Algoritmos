#include<iostream>
#include<cstdlib>
#define TAM 5
using namespace std;

//variavel global
struct queue
{
   float f[TAM];
   int inicio,fim;
};

void enfileira(queue &fil);
void desenfileira(queue &fil);
void elemPrimeiro(queue &fil);
void situacaoFila(queue &fil);

int main()
{
   char resp[10]; int op;
   queue fila;
   //inicializa a fila
   fila.inicio=0;
   fila.fim=-1;

   do
   {
      system("cls");
      system ("color  2f");
      cout<<"\nFILA - First In - First Out)\n\n";
      cout<<"\n1 - Inserir um valor na fila";
      cout<<"\n2 - Remover um valor da fila";
      cout<<"\n3 - Mostrar o elemento do inicio da fila";
      cout<<"\n4 - Mostrar situacao da fila";
      cout<<"\n5 - Sai";
      cout<<"\nOpcao: "; 
      cin>>resp;op=atoi(resp);
      system("cls");
  
      switch(op)
      {
         case 1: enfileira(fila);
                 break;
         case 2: desenfileira(fila);
                 break;
         case 3: elemPrimeiro(fila); 
                 break;
         case 4: situacaoFila(fila);
                 break;
         case 5: cout<<"\nPrograma basico da FILA\n";
                 break;

         default: cout<<"Opcao Invalida";
      }

      cout<<"\n\n"; system("pause");

   }while(op!=5);

}

void enfileira(queue &fil)
{
   float valor;
  
   if(fil.fim==TAM-1) //testando se a fila está cheia 
      cout<<"\nAtencao! Fila Cheia\n";
   else
   {
      cout<<"\nDigite o valor a ser enfileirado: ";
      cin>>valor;
      fil.fim++;  // atualiza o final da fila
      fil.f[fil.fim]=valor; //guarda o valor no final da fila
   }
}

void desenfileira(queue &fil)
{
   if(fil.inicio>fil.fim) //testando se a fila está vazia
      cout<<"\nAtencao. Fila Vazia\n";
   else
   {
      cout<<"\nValor removido: "<<fil.f[fil.inicio]; //exibe o valor removido
      fil.inicio++; //atualiza o inicio da fila  
   }
}

void elemPrimeiro(queue &fil)
{
   if(fil.inicio>fil.fim)
      cout<<"\nAtenção. Fila vazia\n";
   else
      cout<<"Elemento do inicio da fila: "<<fil.f[fil.inicio];
}

void situacaoFila(queue &fil)
{
   if(fil.inicio>fil.fim)
      cout<<"\nAtencao, Fila vazia\n";
   else
   {
      cout<<"\nTotal de elementos na fila: "<<fil.fim-fil.inicio+1<<"\n";
      cout<<"\n\nEspaco disponivel na fila: "<<TAM-(fil.fim+1)<<"\n";
      cout<<"\n\nPosicao do primeiro elemento da fila: "<<fil.inicio<<"\n";
      cout<<"\n\nPosicao do ultimo elemento da fila:"<<fil.fim<<"\n";
      cout<<"\n\nPara fins didaticos, exibindo a fila\n";
      cout<<"\nValor\tPosicao no vetor\n";
      
      for(int x=fil.inicio;x<=fil.fim;x++)
         cout<<"\n"<<fil.f[x]<<"\t"<<x;
   }
}
