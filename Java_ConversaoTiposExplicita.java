/*
Conversao entre tipos de dados do tipo explicita: o programador
controla a conversao informando qual tipo sera utilizado atraves
de um operador unario.

*/

class ConversaoTiposExplicita {
    public static void main(String[] args) {

    int x;
    
    float eventos = 25.7f;
    float dias = 7.2f; 

    x = (int) (eventos / dias); 
    
    /* a variavel x recebe a divisao 
       de dois floats e o operador
       unario (int). Vai retornar 
       um valor int. 
    */
    
    System.out.println(x);
    
   }
}