#include<iostream>
#include<cstring>
using namespace std;

int main () {

  struct ficha
   {
      char nomePassageiro[25], origem[25], destino[25], numeroPassagem[25], identidade[25], telefone[25];
      
   }passageiro1={"Sr. Ubaldo Ribeiro, Joao", "Brasil","Londres","Gol 1234","IFP222222","21 233 5489"},
    passageiro2={"Sra. Gaga, Lady", "EUA","Paris","TAM 2231","ASJ5544","23 857 9834"},
    passageiro3={"Sr. Putin, Vladmir", "Brasil","Russia","Gol 3321","SECRET","SECRET"};           

  system("cls");
    
    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
     cout<<"\nNome: "<<passageiro1.nomePassageiro;
     cout<<"\nOrigem: "<<passageiro1.origem<<" ||\tDestino: "<<passageiro1.destino;
     cout<<"\nNumero da passagem: "<<passageiro1.numeroPassagem<<" ||\tIdentidade: "<<passageiro1.identidade<<" ||\tTelefone: "<<passageiro1.telefone;
     cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";

     cout<<"\nNome: "<<passageiro2.nomePassageiro;
     cout<<"\nOrigem: "<<passageiro2.origem<<" ||\tDestino: "<<passageiro2.destino;
     cout<<"\nNumero da passagem: "<<passageiro2.numeroPassagem<<" ||\tIdentidade: "<<passageiro2.identidade<<" ||\tTelefone: "<<passageiro2.telefone;
     cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";

     cout<<"\nNome: "<<passageiro3.nomePassageiro;
     cout<<"\nOrigem: "<<passageiro3.origem<<" ||\tDestino: "<<passageiro3.destino;
     cout<<"\nNumero da passagem: "<<passageiro3.numeroPassagem<<" ||\tIdentidade: "<<passageiro3.identidade<<" ||\tTelefone: "<<passageiro3.telefone;
     cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";

}