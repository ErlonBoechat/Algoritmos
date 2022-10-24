#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sched.h>
#include <sys/wait.h>

#define TAMANHO_PILHA 65536

int contador;

static int funcao_A(void *arg){

   while(1) { //loop infinito
      printf("Para a função A contador = %d.\n", contador);
      usleep(3000000); // dorme 3 segundos
   }
}

static int funcao_B(void *arg){

   while(1){
      printf("Função B incrementando contador.\n");
      contador = contador + 1; // incrementa contador
      printf("Para a função B contador = %d.\n", contador);
      usleep(3000000); // dorme 3 segundos
   }
}

void main (void){
   
   void *pilha_A, *pilha_B;
   int i, pid_A, pid_B, id_A, id_B;  
   
   // aloca pilha para o thread A
   if((pilha_A = malloc(TAMANHO_PILHA)) == 0){
      perror("Erro na alocação da pilha para função A.");
      exit(1);
   }
   
   // aloca pilha para o thread B
   if((pilha_B = malloc(TAMANHO_PILHA)) == 0){
      perror("Erro na alocação da pilha para função B.");
      exit(1);
   }
   
   contador = 0; // inicializa contador
   
   // coloca função A em execução como thread.
   pid_A = clone(funcao_A, pilha_A + TAMANHO_PILHA, CLONE_VM|CLONE_FS|CLONE_FILES|CLONE_SIGHAND|SIGCHLD, &id_A);
   
   // coloca função B em execução como thread.
   pid_B = clone(funcao_B, pilha_B + TAMANHO_PILHA, CLONE_VM|CLONE_FS|CLONE_FILES|CLONE_SIGHAND|SIGCHLD, &id_B);
   
   // coloca programa principal (thread principal) em espera.
   waitpid(pid_A,0,0);
   waitpid(pid_B,0,0);  
}
