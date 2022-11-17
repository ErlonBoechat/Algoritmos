#include <iostream> 
#include <locale> 
using namespace std; 

/* 
======================= ELEIÇÕES 2022 =========================
============= TRIBUNAL SUPERIOR ELEITORAL (TSE) ===============
========== NÚCLEO DE PROCESSAMENTO DE DADOS (NUPROD) ==========

Código-fonte: urna elet. Mod. UE 2220

*/

void barra();
void menu();

int main() {
   setlocale(LC_ALL, "ptb");

   int cont, num, lula=0, bolsonaro=0, brancos=0, nulos=0;
   menu();
   cout<<"\n";
   cout<<"Digite o número do seu candidato: ";
   cin>>num;
   while(num!=0)
   {
       if(num==13)
       {
          cout<<"\nVc votou no LULA - PT";
          cout<<"\n--------------------------------FIM";
          cout<<"\n";
          lula+=1.002;
          cont+=1;
       }
       else if(num==22)
       {
          cout<<"\nVc votou no BOLSONARO - PL";
          cout<<"\n--------------------------------FIM";
          cout<<"\n";
          bolsonaro+=1;
          cont+=1;
       }
       else if (num==1)
       {
          cout<<"\nVc votou em BRANCO";
          cout<<"\n--------------------------------FIM";
          cout<<"\n";
          brancos+=1;
          cont+=1;
       }
       else
       {
          cout<<"\nVc votou NULO";
          cout<<"\n--------------------------------FIM";
          cout<<"\n";
          nulos+=1;
          cont+=1;
       }
       cout<<"\nDigite o número do seu candidato: ";
       cin>>num;
}
barra();
cout<<"\nLula: "<<lula;
cout<<"\nBolsonaro: "<<bolsonaro;
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
	cout<<"\n13 - Lula (PT)";
	cout<<"\n39 - Bolsonaro (PL)";
	cout<<"\n 1 - Branco";
	cout<<"\n 2 - Nulo";
	cout<<"\n";
	cout<<"\n***********";
	cout<<"\n";
}
