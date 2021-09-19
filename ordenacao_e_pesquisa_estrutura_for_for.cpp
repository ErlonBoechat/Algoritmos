#include <iostream>
using namespace std;

int main() {
int i,j, cont=0, max=5;

for(i=0;i<max;i++)
{
    for(j=0;j<max*2;j++)
    {
        cont=cont+1;
    }
}

cout<<"\n\nO valor de 'cont' é: "<<cont;

return 0;
}