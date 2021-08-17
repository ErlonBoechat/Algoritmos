#include <iostream>  
using namespace std; 

int main() {
int cont, num, lula=0, bozo=0, brancos=0, nulos=0;

cout<<"Digite o número do seu candidato: ";
cin>>num;
while(num!=0)
{
if(num==13)
{
cout<<"\nVc votou no Lula";
cout<<"\n********************";
lula+=1;
cont+=1;
}
else if(num==39)
{
cout<<"\nVc votou no Bozo";
cout<<"\n********************";
bozo+=1;
cont+=1;
}
else if (num==1)
{
cout<<"\nVc votou em branco";
cout<<"\n********************";
brancos+=1;
cont+=1;
}
else
{
cout<<"\nVc votou nulo";
cout<<"\n********************";
nulos+=1;
cont+=1;
}
cout<<"\nDigite o número do seu candidato: ";
cin>>num;
}
cout<<"\n";
cout<<"\n********************";
cout<<"\nLula: "<<lula;
cout<<"\nBozo: "<<bozo;
cout<<"\nBrancos: "<<brancos;
cout<<"\nNulos: "<<nulos;
}
