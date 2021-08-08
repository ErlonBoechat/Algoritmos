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
	cout<<"\n";
	cout<<"\nInsira o sentimento: ";
    cin>>sentimento;
while(positivo>=0 || negativo>=0)
{
//if(sentimento='p' || sentimento='n'|| sentimento='e')
if(sentimento=='p' || sentimento=='P')
{
	//positivo++;
	positivo+=1;
	cout<<"\n\n";
	cout<<"POSITIVO"; positivo;
}
else if(sentimento=='n'|| sentimento=='N')
{
	//negativo++;
	negativo=+1;
	cout<<"\n\n";
	cout<<"NEGATIVO";
}
else if (sentimento=='e'||sentimento=='E')
{
	//neutro++;
	neutro=+1;
	cout<<"\n\n";
	cout<<"NEUTRO";
}
cout<<"\n";
cout<<"\nInsira o sentimento: ";
cin>>sentimento;
cout<<"\nPositivas: ", positivo;
cout<<"\nNegativas: ", negativo;
cout<<"\nNeutras: ", neutro;

}

}
