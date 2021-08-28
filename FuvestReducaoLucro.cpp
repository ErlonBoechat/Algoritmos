//(FUVEST-SP 2020) A dona de uma lanchonete observou que, vendendo um combo a R$10,00,
//200 deles são vendidos por dia e que, para cada redição de R$1 nesse preço, ela vende 100
//combos a mais. Nessas condições, qual é a máxima arrecadação diária que ela espera obter com
//a venda desse combo? 

#include <iostream>
using namespace std;

int main() {
    int combos=200;
    float preco=10;
    float lucro=0;
    int reducao=-1;
    
    for(int x=0; x<=10; x++)
    {
        reducao++;
        lucro = (combos + 100*reducao)*(preco-reducao);
        cout<<"\nRetirando "<<x<<" o lucro é de: "<<lucro;
    }
    
}
