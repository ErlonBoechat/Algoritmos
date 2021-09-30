
//Questão 1) Considere a seguinte função busca escrita em 
//linguagem C++ :

//Qual a quantidade total de impressões da letra x nas 
//buscas pelos números n = 4, n = 2 e n = 0 no 
//vetor [1,2,3,4,5,6,7,8], sendo tam = 7 ?

#include<iostream>
using namespace std; 

bool busca(int vetor[ ], int n, int tam);

int main() {

int vetor[] = {1,2,3,4,5,6,7,8};

busca(vetor,4,7);
busca(vetor,2,7);
busca(vetor,0,7);

  return 0;
}

bool busca(int vetor[ ], int n, int tam)
{
    int ini=0, mid;        
    while (ini <= tam)     
    {
         cout << " x "; 
         mid = (ini + tam)/2;  
         if (vetor[mid] == n)
             return true;    
         else if (n > vetor[mid])  
             ini = mid+1;        
         else
             tam = mid-1;  
    }
    return false;
}
