#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb"); // posso comentar aqui?
float tempF, tempC;
cout << "Temperatura em Fahrenheit: ";
cin >> tempF;
tempC=(tempF-32)/1.8;
cout << "Temperatura em graus Célsius: " << tempC;
}
