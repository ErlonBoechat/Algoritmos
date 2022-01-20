/*
Conversao entre tipos de dados do tipo implicita: Ocorre sem 
a necessidade do programador interferir. Os valores sao 
convertidos automaticamente. Isso acontece na conversao de 
inteiro para real, de numeros para strings ou com o uso de operadores 
unarios.

*/

class ConversaoTiposImplicita {
    public static void main(String[] args) {

    float x;
    int i = 20;

    x = i; // x, que e float, recebe um valor inteiro

    System.out.print(“i = ”+x); 
    // o programa imprime o valor float 20.0
    
   }
}
