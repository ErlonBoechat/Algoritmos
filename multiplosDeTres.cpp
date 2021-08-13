#include <iostream>
#include <locale>
using namespace std; 
int main() {
int num, mult, cont=0;
for(num=0;num<=9;num++)
{
cout<<"digite o "<<num+1<<"º número: ";
cin>>mult;
if(mult%3==0)
{
    cont++;
}
}
cout<<"\nQuantidade de múltiplos de 3: "<<cont;
}