import java.util.Scanner;
import java.lang.Math;

class CalcCirculo {
    public static void main(String[] args) {
  
       float raio, p=3.14f;
       
       Scanner valor = new Scanner(System.in);   
       
       System.out.print("Digite o valor de raio: ");
       raio = valor.nextInt();
       
       System.out.print("Comprimento do circulo: " + 2*p*raio +"\n");
       System.out.print("Area do circulo: " + p*(Math.pow(raio, 2)));
         
   }
}