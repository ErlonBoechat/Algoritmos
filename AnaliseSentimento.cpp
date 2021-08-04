#include <iostream>
#include <locale>
#include <string>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int positivas=0;
char sentimento;
cout<<"\nInsira o sentimento: ";
cin>>sentimento;
if(sentimento='p'||sentimento='n'||sentimento='e')
if(sentimento='p')
{
	positivas++;
	cout<<"positivas";
}
}
