#include <iostream>
#include <locale>
using namespace std; 
int main() {
int num, mult=0, cont=0; // a variável de teste 'mult' precisa ter valor atribuído para proceder na estrutura de seleção 'if' ao testarmos o algoritmo no C++ Tutor
for(num=1;num<=10;num++)
{
cout<<"digite o "<<num<<"º número: ";
cin>>mult;
if(mult%3==0)
{
    cont++;
    cout<<"mult------------\n"; // indicador visual dos múltiplos de 3
}
}
cout<<"\nQuantidade de múltiplos de 3: "<<cont;
}
