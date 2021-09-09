#include<iostream>
using namespace std;

int main ()
{
  struct cad    //definição de cad
  {
    char nome[31];
  };
  cad funcionario[3];  //declaração de funcionario
  
  cout<<"\n\nEndereco da estrutura (sem o &): "<<funcionario;
  cout<<"\n\nEndereco da 1ª variável da estrutura: "<<&funcionario[0];
  cout<<"\n\nEndereco da 2ª variável da estrutura: "<<&funcionario[1];
  cout<<"\n\nEndereco da 3ª variável da estrutura: "<<&funcionario[2];
  cout<<"\n\n";
  system("pause");
  return(0);
}