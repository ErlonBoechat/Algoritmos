/*
Ler dois valores reais e imprimir o resultado da soma, 
subtracao, multiplicacao e divisao.
*/


import java.util.Scanner;
class ResultOps {
    public static void main(String[] args) {

      float x,y;
    
      Scanner numero = new Scanner(System.in);
      
      
         System.out.print("Escreva o primeiro numero: ");
         x = numero.nextInt();
         
         System.out.print("Escreva o segundo numero: ");
         y = numero.nextInt();
        
        System.out.print("\nSoma: " + (x+y) + "\n");
        System.out.print("Subtracao: " + (x-y) + "\n");
        System.out.print("Multiplicacao: " + (x*y) + "\n");
        System.out.print("Divisao: " + (x/y) + "\n");
         
   }
}
