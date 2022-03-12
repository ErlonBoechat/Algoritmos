
package DoisCirculos;

public class TestaCirculo {

    public static void main(String[] args) {
       
        Circulo a = new Circulo();
        Circulo b = new Circulo(5,4);

        a.imprimirDados();
        System.out.println("-----------------");
        b.imprimirDados();
        System.out.println("-----------------");
        System.out.println("Distância enrtre a e b: "+ a.distancia(b));
    
    }  
}
