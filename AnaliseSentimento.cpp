#include <iostream>
#include <locale>
#include <string>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int positivo=0;
int negativo=0;
int neutro=0;	
char sentimento;
	cout<<"\nPositivas = p"; 
	cout<<"\nNegativas = n";
	cout<<"\nNeutras = e";
cout<<"\nInsira o sentimento: ";
cin>>sentimento;
while(positivo>=0 || negativo>=0)
{
//if(sentimento='p' || sentimento='n'|| sentimento='e')
if(sentimento='p')
{
	positivo++;
	cout<<"positivo";
}
else if(sentimento='n')
{
	negativo++;
	cout<<"negativo";
}
else if (sentimento='e')
{
	neutro++;
	cout<<"neutro";
}
cout<<"\nInsira o sentimento: ";
cin>>sentimento;
}
}
