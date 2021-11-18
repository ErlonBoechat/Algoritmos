#include <iostream>
#include <cstdlib>
using namespace std;
struct nodo
{
 int info;
 struct nodo *prox;
};
nodo *insereFrente(nodo *plista, int valor);
void exibeTopo(nodo *plista);
void exibeLista(nodo *lista);
nodo *remove(nodo *plista);
void libera(nodo *plista);
int main()
{
 int c, op, valor;
 nodo *lista=NULL;
 do
 {
 system("cls");
 system("color fc");
 cout<<"\n\n= = = Alocacao Dinamica = = =";
 cout<<"\n= =";
 cout<<"\n= 1- Insere na Pilha =";
 cout<<"\n= 2- Remove da Pilha =";
 cout<<"\n= 3- Exibe elemento do topo =";
 cout<<"\n= 4- Libera Pilha =";
 cout<<"\n= 5- Lista Pilha - educativo =";
 cout<<"\n= 6-Sai =";
 cout<<"\n= Opcao: =";
 cout<<"\n= =";
 cout<<"\n= = = = = = = = = = = = = = = =\n";
 cin>>op;
 system("cls");
 system("color 4f");
 switch(op)
 {
 case 1:cout<<"\nDigite numero: ";
 cin>>valor;
 lista = insereFrente(lista, valor);
 break;

 case 2:if(!lista)
 cout << "\n\nNada a remover. Pilha vazia\n";
 else
 {
 lista=remove(lista);
 cout<<"\n\nPrimeiro elemento da Pilha removido\n";
 }
 break;

 case 3: exibeTopo(lista);
 break;
 case 4:if(lista)
 cout<<"\nTem elementos na Pilha\n";
 else
 {
 libera(lista);
 cout<<"\nLiberando Memoria";
 }
 break;

 case 5:if(!lista)
 cout<<"\nLista vazia\n";
 else
 exibeLista(lista);
 break;

 case 6: cout<<"Fechando PILHA Dinamica\n";
 break;

 default:cout<<"\nOpcao Invalida\n";
 }
 cout<<"\n\n";
 system("pause");
} while(op !=6);
return 0;
}
nodo* insereFrente(nodo *plista, int valor)
{
nodo *temp = new nodo;
 if(!temp)
 {
 cout<<"\nNao foi possivel fazer Alocacao\n";
 system("pause");
 exit (1);
 }
temp->info = valor;
temp->prox = plista; 
return temp;
}
void exibeTopo(nodo *plista)
{
 if(!plista)
 cout << "\n\nPilha vazia\n";
 else
 cout<<"\nValor do elemento do topo: "<<plista->info;
}
nodo *remove(nodo *plista)
{
 nodo *aux;
 aux = plista;
plista = plista->prox;
delete aux;
return plista;
}
void libera(nodo *plista)
{
 delete plista; plista=0;
}
void exibeLista(nodo *plista)
{
 cout<<"\nListando\n";
 while(plista)
 {
 cout<<"\n"<<plista->info;
 plista=plista->prox;
 }
}
