#include <iostream>
#include <locale>
using namespace std;
 main()
{
setlocale(LC_ALL, "ptb");
int qtde_entrevistados, soma_pesos, soma_idades, idade;
float peso, media_pesos, media_idades;
qtde_entrevistados=0;
soma_pesos=0;
soma_idades=0;
cout<<"\nDigite o peso: ";
cin>>(peso);
while(peso!=0)
{
cout<<"Digite a idade: ";
cin>>(idade);
qtde_entrevistados++;
soma_pesos+=peso;
soma_idades+=idade;
cout<< "\nDigite o peso: ";
cin>>peso;
}
media_pesos=soma_pesos/qtde_entrevistados;
media_idades=soma_idades/qtde_entrevistados;
cout<<"\nMédia de idade: "	<<media_idades;
cout<<" |  Média de peso: "	<<media_pesos;
cout<<" | Entrevistados: "	<<qtde_entrevistados;
cout<<" | soma_pesos: "	<<soma_pesos;
}
