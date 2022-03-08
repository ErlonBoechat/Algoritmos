/*
Para calcular qualquer tipo de potência na forma: a^b
onde a e b são do tipo double, usamos o método pow() da 
classe Math
-----------------------------------------------------------|
                 numero = Math.pow(a,b)
-----------------------------------------------------------|
*/

class StaticMethod {
    public static void main(String[] args) {
        double a=2,b=2, res;
        res = Math.pow(a,b);
        
        System.out.println(res);
    }
}

/*
-----------------------------------------------------------|

Lembre-se de que estes métodos retornam double.

Caso você tenha declarado um float e queira receber o 
resultado na sua variável float, use o 'cast'.

Por exemplo, no caso dos nossos methods para o cálculo de IMC, 
o 'quadrado' retorna um float, então fazemos:

             
                 (float)Math.pow(altura,2);
                 
-----------------------------------------------------------|
Assim, o método Math.pow() irá retornar um float, ao invés 
do double. Veja como ficariam os nossos métodos:


 public static float IMC(float peso, float altura){
        return peso/(float)Math.pow(altura, 2);
    }
    
    public static float quadrado(float num){
        return Math.pow(num,2);
    }
    
-----------------------------------------------------------|
*/
