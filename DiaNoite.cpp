#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int hora;
while(hora!=100)
{
    
cout<< "\nInforme a hora: ";
cin >> hora;
if(hora>=6&&hora<=17)
{
	cout<<"É dia";
}
else if(hora<25)
{
	cout<< "É noite";
}
else
cout<<"\nHora errada";

cout<<"\n----------------------";
}
}
