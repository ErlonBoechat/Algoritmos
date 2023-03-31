import java.util.InputMismatchException;
import java.util.Scanner;

public class DivideByZeroWithExceptionHandling {

   public static int quotient(int numerator, int denominator) throws ArithmeticException,InputMismatchException {
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
/*
-----------------------------------------------------------|
Este é um exemplo de um programa Java que lida com exceções 
de divisão por zero. O programa solicita ao usuário que 
insira um numerador e um denominador e, em seguida, 
executa a operação de divisão e exibe o resultado. Se o 
usuário insere um valor inválido, como uma entrada não 
numérica ou um denominador de zero, o programa captura e 
trata a exceção correspondente.

Aqui está o que o programa faz:

1. Importa as classes Scanner e InputMismatchException do 
pacote java.util. A classe Scanner é usada para receber a 
entrada do usuário e a classe InputMismatchException é usada 
para tratar entradas não numéricas.

2. Define um método público estático chamado 'quotient', 
que aceita dois inteiros como argumentos e retorna o 
quociente da divisão deles. Se o denominador é zero, o 
método lança uma exceção do tipo ArithmeticException.

3. Define um método público estático chamado 'line', 
que imprime uma linha de traços para ajudar a separar a 
saída do programa.
-----------------------------------------------------------|
4. Define o método principal (main), que é o ponto de 
entrada para o programa.

5. Cria um objeto Scanner para ler a entrada do usuário.

6. Cria uma variável booleana 'continueLoop' que controla 
a execução do loop principal do programa.

7. Cria variáveis para armazenar o numerador e o 
denominador.

8. Inicia um loop que executa enquanto o usuário não inserir 
um numerador igual a -1.

9. Dentro do loop, outro loop é executado para lidar com 
entradas inválidas. O loop interno continua até que o 
usuário insira valores válidos.

10. Dentro do loop interno, o programa tenta ler um numerador 
e um denominador usando o objeto Scanner.

11. Se o usuário insere uma entrada não numérica, uma exceção 
InputMismatchException é lançada. O programa captura a 
exceção, imprime uma mensagem de erro e continua pedindo 
que o usuário insira valores até que uma entrada numérica 
válida seja inserida.
-----------------------------------------------------------|
12. Se o usuário insere um denominador de zero, uma exceção 
ArithmeticException é lançada. O programa captura a 
exceção, imprime uma mensagem de erro e continua pedindo 
que o usuário insira valores até que um denominador 
não-zero válido seja inserido.

13. Se o usuário insere valores numéricos válidos, o 
programa executa a operação de divisão usando o método 
'quotient'. Se o método 'quotient' lançar uma 
exceção, o programa captura a exceção e imprime uma 
mensagem de erro apropriada.

14. O resultado da operação de divisão é exibido na saída 
padrão, juntamente com uma linha de traços para separar 
a saída.

15. O loop interno termina e o programa continua pedindo 
ao usuário que insira um numerador e um denominador até 
que o numerador inserido seja igual a -1.

15. O programa termina.
*/
