#include<iostream>
#include<cstring>
using namespace std;

struct CADASTRO {
   char nome[30];
   float nota;
};

void exibe(CADASTRO *m);

int main()
{
   CADASTRO aluno, *p;
   cout<<"\nNome do aluno: ";
   cin.getline(aluno.nome,30);
   
   cout<<"\nNota: ";
   cin>>aluno.nota; 
   p=&aluno; //aponta para a estrutura
   
   exibe(p); //passa p (ponteiro para estrutura) como parametro

   cout<<"\n\n";
   system("pause");
}

void exibe(CADASTRO *m)
{
   int c;
   
   for(c=0;c<strlen(m->nome);c++)
   m->nome[c]=toupper(m->nome[c]);
   cout<<"-------------------";
   cout<<"\n\nDados do aluno: ";
   cout<<"\nNome: "<<m->nome; //as duas formas foram usadas
   cout<<"\nNota: "<<(*m).nota;
   
}
