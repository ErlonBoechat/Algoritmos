#include<iostream>
#include<cctype>
#include <cstring>
using namespace std;

struct cad
{
  char nome[31];
};

void maiuscula(char func[]);

int main ()
{
  cad funcionario;
  char fixo[100];
  cout<<"\nNome de até 30 caracteres: ";
  cin.getline(fixo,100);
  
  while(strlen(fixo)>30)
  {
    cout<<"\nNome muito extenso.";
    cout<<"\nNome de até 30 caracteres: ";
    cin.getline(fixo,100);
  }
  strcpy(funcionario.nome,fixo);
  
  maiuscula(funcionario.nome);

  //system("cls");
  cout<<"\nNome do funcionario: "<<funcionario.nome;
  cout<<"\n\n";
  //system("pause");
  return(0);
}

void maiuscula(char func[])
{
  int x;
  for(x=0;func[x]!='\0';x++)
  func[x]=toupper(func[x]);
}