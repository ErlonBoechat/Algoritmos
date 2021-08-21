#include<iostream>
using namespace std;

double media (double n[], int tam);

int main() {

double notas[5];   
for(int x=0; x<5; x++)
{
  cout<<"\nNota "<<x+1<<": ";
  cin>>notas[x];
}
cout<<"\n\nRelação das notas originais\n"; 

for(int x=0; x<5; x++)
cout<<notas[x]<<"\t";
cout<<"\n\nMedia da turma: "<<media (notas, 5);
cout<<"\n\n";
system ("pause");
return 0;
}

double media (double n[], int tam) // A função "media" recebe a passagem de um vetor "n" com notas de alunos e a passagem de valor de uma variável inteira "tam" com seu tamanho (quantidade armazenada de valores);
{
  double soma=0; // Uma variável "soma" é declarada para receber a soma das notas contidas no vetor;
  for (int x=0; x<tam; x++) // um loop com a quantidade "tam" de repetições (que será passada de "main" para a função "media" - quantidade armazenada de valores) ...
  {
  soma+=n[x]; //... vai somar e armazenar todos os valores do vetor "n" na variável "soma";
  }
  return soma/tam; // a função vai retornar a divisão de "soma" pela quantidade de valores do vetor, declarada em "tam" (média das notas dos alunos). 
}
