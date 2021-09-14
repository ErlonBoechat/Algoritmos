#include<iostream>
using namespace std;

struct cad  // definição de cad
{
  int matricula;
  float CR;
};

cad Entrada(); 

// prótótipo da função Entrada sem parâmetros
// do tipo cad que é um struct e com retorno

int main()
{
  cad aluno; //declaração de aluno
  aluno=Entrada(); // a estrutura aluno recebe o retorno da função Entrada
  // saída

system("cls");
cout<<"\nMatricula do aluno: "<<aluno.matricula<<"\tCR: "<<aluno.CR;
cout<<"\n\n";
system("pause");
return(0);

}

cad Entrada()
{
  cad temp;
  cout<<"\nMatricula do aluno: ";
  cin>>temp.matricula;
  cout<<"\nDigite CR: ";
  cin>>temp.CR;
  return(temp); //retorna uma estrutura 
}