/*
O algoritmo será rodado em paralelo com a sua versão 2 (upload seguinte) a partir de dois scripts sh no Linux para que seja
acompanhado o peso de cada processo (algoritmos 1 e 2) na UCP e para que, com o segundo script, seja definido o nice 5 para o algoritmo 2 (acréscimo de
5 em sua prioridade). Conferir as diferenças no uso da UCP entre os dois processos com o programa 'top'. Aula 2 Video 4 ARA1386
*/

#include <stdio.h>
#include <math.h>
#include <limits.h>

double pi(long int);

void main(void){
   
   long int i;
   
   for(i=1;i<=LONG_MAX;i*=5)
      
      printf("pi(1) = %.10lf para %ld interações\n", pi(i), i);
      
}

double pi(long int i) {
   
   long int k;
   double p=0;
   
   for(k=0;k<i;k++)
      
      if(k%2)
         p-=(double) 1/(2*k+1);
      else
         p+=(double) 1/(2*k+1);

    return 4*p;
}
