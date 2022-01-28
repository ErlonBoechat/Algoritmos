/*

Usa-se %f para ponto flutuante, %s para string. Se quisermos
especificar o número de casas decimais, devemos colocar o 
número de casas entre o "%", o "." e o "f".

Exemplo:

Mostrar o valor da variavel media, previamente definida, 
com duas casas decimais. Note que media é do tipo float 
ou double.

Veja que não ha "+" como no
print ou println e sim uma virgula

*/

import java.util.Scanner;
   public class Leitura {

      public static void main(String [] args) {

    double media = 34.799999;
    System.out.printf("Media = %.2f ", media);
   }
}
