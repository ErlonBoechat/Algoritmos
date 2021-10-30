#include<iostream>
#include<cstring>
using namespace std;

struct CADASTRO
{
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
   
   exibe(p);

   cout<<"\n\n";
   system("pause");
}

void exibe(CADASTRO *m)
{
   int c;
   
   for(c=0;c<strlen(m->nome);c++)
   m->nome[c]=toupper(m->nome[c]);
   cout<<"\nDados do aluno\n";
   cout<<"\n\nNOME: "<<m->nome; //as duas formas foram usadas
   cout<<"\n\nNOTA: "<<(*m).nota;
   
}