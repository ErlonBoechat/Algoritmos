#include <iostream>
#include <locale>
using namespace std;
int descobreIdade (int anoAtual, int anoNas);
int main()
{
int anoA, anoN;
cout<<"Digite o ano atual: ";
cin>>anoA;
cout<<"Digite o ano de nascimento: ";
cin>>anoN;
cout<<"Você terá até 31 de dezembro de "<<anoA<<" "<<descobreIdade(anoA, anoN) << " anos";
system("pause");
return 0;
}
int descobreIdade (int anoAtual, int anoNas)
{
  return anoAtual - anoNas;
}