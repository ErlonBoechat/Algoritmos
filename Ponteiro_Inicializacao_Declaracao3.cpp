#include<iostream>
using namespace std;

int main()
{
   int a=13, j=23, *pa, *pj;
   pa=&a;
   pj=&j;
   cout<<"\nConteudo de a: "<<a;
   cout<<"\nConteudo de j: "<<j;
   cout<<"\nConteudo de pa: "<<pa;
   cout<<"\nConteudo do endereco apontado por pa: "<<*pa;
   cout<<"\nConteudo de pj: "<<pj;
   cout<<"\nConteudo do endereco apontado por pj"<<*pj;
   cout<<"\n\n";
   system("pause");
}

//ANALISANDO O CÓDIGO

//1)Nas linhas 8 e 9, são exibidos os conteúdos das variáveis a e j. Nada diferente do que conhecemos.
//2) Na linha 10, é exibido o conteúdo da variável ponteiro pa que, como está apontando para ä variável a, aparece o endereço da variável a.
//3) Na linha 11, a variável pa aparece com * antes. Isto significa que desejamos o conteúdo do endereço apontado por pa que é o número 13.
//4) Na linha 12, é exibido o conteúdo da variável ponteiro pj que, como está apontando para ä variável b, aparece o endereço da variável b.
//5) Na linha 13, a variável pj aparece com * antes. Isto significa que desejamos o conteúdo do endereço apontado por pj que é o número 23.
