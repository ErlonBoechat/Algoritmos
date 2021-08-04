#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int idade;
cout<<("\nSua idade:  ");
cin>>(idade);
if (idade>=7 && idade<=12)
{
	cout<<("INFANTIL");
}
else if (idade>=13 && idade<=17)
{
	cout<<("JUVENIL");
}
else if(idade>=18 && idade<=49)
{
	cout<<("ADULTO");
}
else if (idade>=50)
{
	cout<<("SENIOR");
}
else 
{
	cout<<("Você não tem idade para competir.");
}
}
