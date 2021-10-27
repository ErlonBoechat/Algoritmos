#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<string>
#include<cstdlib>

using namespace std;

//nó ou nodo
struct nodo
{
   int info;
   nodo* prox;
}

nodo* insereFrente(nodo* ptr, int valor);
nodo* insereFim(nodo* ptr, int valor);

void exibe(nodo* ptr);
nodo* removeFrente(nodo* ptr);
nodo* removeFim(nodo* ptr);

void substituiNo(nodo* ptr, int posicao, int novoValor);
int buscaSequencial(nodo* ptr, int valor);
void libera(nodo* ptr);
int contaNos(nodo* ptr);

int main ()
{
}   
