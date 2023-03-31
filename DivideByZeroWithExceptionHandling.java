import java.util.InputMismatchException;
import java.util.Scanner;

public class DivideByZeroWithExceptionHandling {

   public static int quotient(int numerator, int denominator) throws ArithmeticException {
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

            } catch (InputMismatchException inputMismatchException) {

                 System.err.printf("%nException: %s%n", inputMismatchException);
                 scanner.nextLine(); // descarta a entrada para o usuário tentar de novo
                 System.out.printf("You must enter integers. Please try again.%n%n");
                 line();

              } catch (ArithmeticException arithmeticException) {

                   System.err.printf("%nException: %s%n", arithmeticException);
                   System.out.printf("Zero is an invalid denominator. Please try again.%n%n");
                   line();                
                }

         } while(continueLoop);  
      }
   }
}