//A inicialização poderá acontecer na declaração da mesma forma que fazemos 
//com as variáveis simples ou depois da declaração através de um comando de 
//atribuição onde a variável ponteiro receberá o endereço da variável que ela irá apontar.

#include<iostream>
using namespace std;
int main ()
{
   float a=8, *ptr=&a;
   cout<<"\nConteudo do endereco apontado por ptr: "<<*ptr;
   cout<<"\n\n";
   system("pause");
}
