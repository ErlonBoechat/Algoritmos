#include <iostream>
using namespace std;
void reajuste()

{

  float valor, percentual, reajustado;

  cout<<"\nDigite o valor que devera ser reajustado R$ ";

  cin>>valor;

  cout<<"\nDigite o valor do percentual de reajuste de 0 a 100: ";

  cin>>percentual;

  reajustado= valor + valor * percentual/100;

  cout<<"\nValor reajustado R$ "<<reajustado;

}
int main() {
  
 reajuste();
 cout<<"\n\n";
 

    return 0;
}
