#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int num, contador;
cout<< "Número para a contagem regressiva: ";
cin>>(num);
for (contador=num;contador>=0;contador--)
{
	cout<<contador<<"\n";
}
}
