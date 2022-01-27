/*
Escreva um programa em Java que inicialize duas variáveis inteiras na declaração,
depois calcule e imprima o resto da divisão da 1ª. pela 2ª. 

Teste se o resto calculado é nulo ou não, emitindo mensagem adequada para ambos 
os casos.
*/

class Ex1 {
    public static void main(String[] args) {
        int x=11, y=5;
        int resto;
        
        resto = x%y;
        
        System.out.println(resto); 
        System.out.println("\n"); 
        
        if(resto>0)
           System.out.print("\nNao nulo ");
        
        else
           System.out.print("\nNulo ");
    }
}
