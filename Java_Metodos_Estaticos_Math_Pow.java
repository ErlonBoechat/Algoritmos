/*
Para calcular qualquer tipo de potências, da forma: a^b
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
