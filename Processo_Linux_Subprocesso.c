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
   contador = 0 // inicializa o contador
   pid = fork(); // processo se divide em dois 
   
   if(pid == 0)
      funcao_A(); // se PID igual a zero executa o código da função A
   else
      funcao_B(); // se PID diferente de zero executa código da função B          
}
