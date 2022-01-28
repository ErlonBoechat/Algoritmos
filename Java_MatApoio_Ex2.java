/*
Escreva um programa em Java que inicialize duas variáveis reais do tipo double,
calcule e imprima, após mensagens adequadas, o resultado da soma, da subtração, do
produto e da divisão. Depois, verifique se a soma do primeiro valor com o segundo
valor é maior ou igual ao dobro do 2º. valor.
*/

class Ex2 {
    public static void main(String[] args) {
        double x=75.9,y=73.32;

        System.out.println(x+y);
        System.out.println(x-y);
        System.out.println(x*y);
        System.out.println(x/y);
        
        System.out.println("\n");
        
        if(x+y>=y*2)
        System.out.print("\nSIM - A soma de " + x +" com "+y+" e maior ou igual a "+y*2);
        else
        System.out.print("\nNAO - A soma de " + x +" com "+y+" nao e maior ou igual a "+y*2);
    }
}
