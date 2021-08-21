#include<iostream>
using namespace std;

double media (double n[], int tam); // protocolo da função que vai receber os valores da matriz "notas", somá-los e retornar a média desses valores;

int main() {

double notas[5]; // vetor "notas" é declarado com 5 posições;
for(int x=0; x<5; x++) // um loop for de 5 repetições...
{
  cout<<"\nNota "<<x+1<<": "; // vai receber os 5 valores das notas... 
  cin>>notas[x]; //... e armazenar esses valores no vetor "notas";
}
cout<<"\n\nRelação das notas originais\n"; 

for(int x=0; x<5; x++) // um loop for de 5 repetições... 
cout<<notas[x]<<"\t"; //... vai exibir as 5 notas armazenadas lado a lado (\t); 
cout<<"\n\nMedia da turma: "<<media (notas, 5); // a função "média" é chamada e é feita a passagem do vetor "notas" para "n[]" e a passagem de valor para "tam" com o tamanho do vetor.
cout<<"\n\n";
system ("pause");
return 0;
}

double media (double n[], int tam) // A função "media" recebe a passagem de um vetor "n" com notas de alunos e a passagem de valor de uma variável inteira "tam" com seu tamanho (quantidade armazenada de valores);
{
  double soma; // Uma variável "soma" é declarada para receber a soma das notas contidas no vetor;
  for (int x=0; x<tam; x++) // um loop com a quantidade "tam" de repetições (que será passada de "main" para a função "media" - quantidade armazenada de valores) ...
  {
  soma+=n[x]; //... vai somar e armazenar todos os valores do vetor "n" na variável "soma";
  }
  return soma/tam; // a função vai retornar a divisão de "soma" pela quantidade de valores do vetor, declarada em "tam" (média das notas dos alunos). 
}
