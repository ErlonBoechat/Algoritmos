/*
-----------------------------------------------------------|
A declaração da classe genérica ''Exception' para tratamento 
de exceções mostra que a declaração de exceções específicas, 
como no código anterior (Java_Tratamento_Excecoes.java), 
permite tratar de modo adequado diferentes tipos de exeções. 

Neste código, ao entrarmos com valores que não sejam 
inteiros ou com zero para o divisor, as exceções 
InputMismatchException e ArithmeticException são tratadas 
por um único mecanismo try-catch, que vai dar resposta 
adequada de acordo com a exceção, mas não permitirá um 
tratamento individual da exceção pelo programador. 

Note que o 'System.out.printf' do catch Exception 
imprimirá sempre a mesma saída, independente da exceção, 
dizendo que é necessário o uso de inteiros 
(mesmo quando a exceção for causada pela divisão 
por zero) exatamente porque temos um mecanismo
de tratamento usando uma classe genérica (Exception) para 
lidar com mais de um tipo de exceção.
-----------------------------------------------------------|
*/
import java.util.InputMismatchException;
import java.util.Scanner;

public class DivideByZeroWithExceptionHandling {

   public static int quotient(int numerator, int denominator) throws Exception {
      return numerator/denominator;  
   }

   public static void line() {
      for(int x=0;x<40;x++)
         System.out.print("-");
   }

   public static void main(String[] args) {
   
      Scanner scanner = new Scanner(System.in);
      boolean continueLoop = true;
      int denominator, numerator=0;

      while(numerator!=-1) {
                 
         do {   
                
            try {
                 
               System.out.print("\n\nPlease, enter an integer numerator: ");
               numerator = scanner.nextInt();
                 
               System.out.print("Please, enter an integer denominator: ");          
               denominator = scanner.nextInt();           
                
               int result = quotient(numerator,denominator); 
               System.out.printf("%nRESULT: %d/%d = %d%n\n", numerator, denominator, result);
               line();
               continueLoop = false;
             
            } catch (Exception e) {
                       
               System.err.printf("%nException: %s%n", e);
               scanner.nextLine(); // descarta a entrada para o usuário tentar de novo
               System.out.printf("You must enter integers. Please try again.%n%n");
               line();

            } 
         } while(continueLoop);  
      }
   }
}
