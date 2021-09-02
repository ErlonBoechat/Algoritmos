#include<iostream>
#include<cstring>
using namespace std;

int main ()
{
    char nomeProd1[21]="martelo", nomeProd2[21]="furadeira", auxC[21];
    float valor1=35.90, valor2=256.75, auxf;
    
    if(strcmp(nomeProd1,nomeProd2)>0)
    {
     strcpy(auxC,nomeProd1); 
     strcpy(nomeProd1, nomeProd2); 
     strcpy(nomeProd2,auxC);
     
     auxf=valor1;
     valor1=valor2;
     valor2=auxf;     
    }
  
    cout<<"\nNome do Produto 1: "<<nomeProd1<<"\t"<<valor1;
    cout<<"\nNome do Produto 2: "<<nomeProd2<<"\t"<<valor2;
    cout<<"\n\n";

    system("pause");
}