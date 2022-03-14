/*
Existe uma outra sintaxe do comando for para percorrer
vetores. Essa forma é usada apenas para ler os dados do 
vetor, mas não serve para alterar o vetor. 

Aqui estamos usando o for-each. Não é preciso indexar.

*/

public class Vetor {
   public static void main(String[] args) {
      
      int[] v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

      for (int n : v)
         System.out.println(n);
  }
}
