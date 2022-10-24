#include<stdio.h>
#include<unistd.h>

int contador;

void funcao_A(void) {
   while(1){
      printf("Para a função A contador = %d.\n", contador);
      usleep(3000000); // dorme 3 segundos
   }
}

void funcao_B(void) {
   while(1){
      printf("Função B incrementando contador.\n");
      contador = contador +1; // incrementa contador
      printf("Para a função B contador = %d.\n", contador);
      usleep(3000000); // dorme 3 segundos
   }
}

void main (void){
   int pid;
   contador = 0; // inicializa o contador
   pid = fork(); // processo se divide em dois 
   
   if(pid == 0)
      funcao_A(); // se PID igual a zero executa o código da função A
   else
      funcao_B(); // se PID diferente de zero executa código da função B          
}

/*

Output (loop infinito):

Função B incrementando contador.
Para a função B contador = 1.
Para a função A contador = 0.
Função B incrementando contador.
Para a função B contador = 2.
Para a função A contador = 0.
Função B incrementando contador.
Para a função B contador = 3.
Para a função A contador = 0.
Função B incrementando contador.
Para a função B contador = 4.
Para a função A contador = 0.
Função B incrementando contador.
Para a função B contador = 5.
Para a função A contador = 0.
Função B incrementando contador.
Para a função B contador = 6.
Para a função A contador = 0.
Função B incrementando contador.
Para a função A contador = 0.
Para a função B contador = 7.
Para a função A contador = 0.
Função B incrementando contador.
Para a função B contador = 8.
Para a função A contador = 0.
Função B incrementando contador.
Para a função B contador = 9.
Para a função A contador = 0.
Função B incrementando contador.
Para a função B contador = 10.
Para a função A contador = 0.
Função B incrementando contador.
Para a função B contador = 11.
Para a função A contador = 0.
Função B incrementando contador.
Para a função B contador = 12.
Função B incrementando contador.
Para a função A contador = 0.
Para a função B contador = 13.
Para a função A contador = 0.
Função B incrementando contador.
Para a função B contador = 14.
Função B incrementando contador.
Para a função A contador = 0.
Para a função B contador = 15.
Função B incrementando contador.
Para a função B contador = 16.
Para a função A contador = 0.
Função B incrementando contador.
Para a função B contador = 17.
Para a função A contador = 0.
Para a função A contador = 0.
Função B incrementando contador.
Para a função B contador = 18.
Para a função A contador = 0.
Função B incrementando contador.
Para a função B contador = 19.
Para a função A contador = 0.
Função B incrementando contador.
Para a função B contador = 20.
Função B incrementando contador.
Para a função A contador = 0.
Para a função B contador = 21.
Para a função A contador = 0.
Função B incrementando contador.
Para a função B contador = 22.
Função B incrementando contador.
Para a função B contador = 23.
Para a função A contador = 0.
...
   */
