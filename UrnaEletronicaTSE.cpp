#include <iostream> 
#include <locale> 
using namespace std; 

void barra();
void menu();

int main() {
setlocale(LC_ALL, "ptb");

int cont, num, lula=0, bozo=0, brancos=0, nulos=0;
menu();
cout<<"\n";
cout<<"Digite o número do seu candidato: ";
cin>>num;
while(num!=0)
{
if(num==13)
{
cout<<"\nVc votou no LULA";
cout<<"\n";
lula+=1;
cont+=1;
}
else if(num==39)
{
cout<<"\nVc votou no BOZO";
cout<<"\n";
bozo+=1;
cont+=1;
}
else if (num==1)
{
cout<<"\nVc votou em BRANCO";
cout<<"\n";
brancos+=1;
cont+=1;
}
else
{
cout<<"\nVc votou NULO";
cout<<"\n";
nulos+=1;
cont+=1;
}
cout<<"\nDigite o número do seu candidato: ";
cin>>num;
}
barra();
cout<<"\nLula: "<<lula;
cout<<"\nBozo: "<<bozo;
cout<<"\nBrancos: "<<brancos;
cout<<"\nNulos: "<<nulos<<"\n";
barra();
cout<<"TOTAL: "<<cont<<"\n";
cout<<"\n";

system("pause");
return 0;        
	
}
void barra()
{
	int num;
	cout<<"\n";
	cout<<"\n";
	for(num=0; num<=10; num++)
	{
		cout<<"*";
	}
	cout<<"\n";
}

void menu()
{
	cout<<"\n13 - Lula";
	cout<<"\n39 - Bozo";
	cout<<"\n1 - Branco";
	cout<<"\n2 - Nulo";
	cout<<"\n";
	cout<<"\n***********";
	cout<<"\n";
}
