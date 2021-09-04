#include<iostream>
#include<cstring>
using namespace std;

int main () {

  struct ficha
   {
     char nome[25],esporte[25],categoria[25],telefone[25];
    float ajudaCusto;
    int anoNas;       
   };
  
  ficha atleta;
  strcpy(atleta.nome, "Pelé");  
  strcpy(atleta.esporte, "Futebol");
  strcpy(atleta.categoria, "Adulto");
  strcpy(atleta.telefone, "21 2233 4455");
  atleta.ajudaCusto=2000;
  atleta.anoNas=1999;

system("cls");
    
     cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
     cout<<"\nNome: "<<atleta.nome;
     cout<<"\nEsporte: "<<atleta.esporte<<" ||\tCategoria: "<<atleta.categoria;
     cout<<"\nTelefone: "<<atleta.telefone;
     cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";

} 