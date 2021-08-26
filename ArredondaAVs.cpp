//Construa uma função que receba o endereço de um vetor que 
//armazena as notas da AV1 de uma turma e seu tamanho. 
//A função devera arredondar as notas para cima. 

#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

void arredonda(double a[], int tam);

int main () {
    
    int tamTurma;
      double notas[] {1.1,2.2,3.3,4.4,5.5};
   // double notas[50];
    
    cout<<"\nTamanho da turma: ";
    cin>>tamTurma;
    
    cout<<endl;
    
    for(int x=0; x<tamTurma; x++)
    {
        cout<<"\nDigite a "<<x+1<<"ª nota: ";
        cin>>notas[x];
    }

   cout<<endl;

    arredonda(notas, tamTurma);
    
    for(int x=0;x<tamTurma;x++)
    {
        cout<<"\n\n"<<x+1<<"ª nota: "<<notas[x];
    }
  
  return 0;
}

void arredonda(double a[], int tam)
{
    for(int x=0;x<tam;x++)
    a[x]=ceil(a[x]);
}
