
package DoisCirculos;

public class TestaCirculo {

    public static void main(String[] args) {
       
        Circulo a = new Circulo();
        Circulo b = new Circulo(-4,6);

        a.imprimirDados();
        System.out.println("-----------------");
        b.imprimirDados();
        System.out.println("-----------------");
        System.out.println("Distância entre a e b: "+ a.distancia(b));
        System.out.println("");
    
    }  
}
