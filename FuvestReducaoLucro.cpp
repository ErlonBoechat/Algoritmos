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