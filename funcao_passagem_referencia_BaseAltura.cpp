#include <iostream>
#include <locale>
using namespace std;
float areaRetangulo (float, float);
int main()
{
int base, altura;
cout<<"Valor da base: ";
cin>>base;
cout<<"Valor da altura: ";
cin>>altura;
cout<<"Area: "<<areaRetangulo(base, altura)<<" m2";
cout<<"\n\n";
system("pause");
return 0;
}
float areaRetangulo(float b, float h)
{
 return b*h;
}