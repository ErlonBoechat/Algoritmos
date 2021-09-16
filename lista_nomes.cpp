#include <iostream>
using namespace std;

int main() {
char nome[10][10];
int num;

for (num=0;num<10;num++)
{
    cout<<"\n"<<num+1<<"º Nome: ";
    cin>>nome[num];
}
cout<<"\n\n";
cout<<"-----------------------------------------";

for (num=0;num<10;num++)
{
    cout<<"\n"<<nome[num];
}

    return 0;
}