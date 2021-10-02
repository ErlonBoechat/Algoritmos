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
       system("cls");  
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
       system("cls");
       
   }while(0!=1);
} //continua...