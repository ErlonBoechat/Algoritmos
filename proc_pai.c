#include <stdio.h>
#include <unistd.h>

void main(int argc,char **argv, char* envp[]) 
{
   int pid;
   pid = fork(); // Processo se divide em dois
   
   if(pid!=0) // Se PID é diferente de zero, executa o codigo do pai
   {
      printf("Processo pai em execução (PID: %d). PID do filho = %d\n",getpid(),pid);
      while(1) // loop infinito
         usleep(1000000); // Dorme 1 segundo
   }     
   else // Se PID e igual a zero executa o código do filho
   {
       printf("Carregando código do processo filho.\n");
       execve("proc_filho",argv,envp); // Troca o codigo pelo de "proc_filho"
   }
}