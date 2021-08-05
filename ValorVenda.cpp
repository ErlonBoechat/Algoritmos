#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
float valorCompra, valorVenda, margem;
cout << "Insira o valor de compra do produto: ";
cin >> valorCompra;
cout << "Insira a margem de lucro (%): ";
cin >>margem;
valorVenda = valorCompra*(margem+100)/100;
cout << "O valor de venda é: " << valorVenda;
}
