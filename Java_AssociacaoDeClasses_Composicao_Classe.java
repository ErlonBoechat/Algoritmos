/*
-----------------------------------------------------------|
-------------------------------------------- 5 - Composição

Tipo de associação onde uma nova classe usa classes 
existentes como atributos;

               Relacionamento “tem um”.

Ex.: uma conta tem um dono (cliente),
     um cliente tem um nome (string);

-----------------------------------------------------------|

*/


package PackComposicao;
import java.util.Random;

public class Aleatorio {
    
     int numero;

     Aleatorio(int max) {

        numero = new Random().nextInt(max);
    }
}
