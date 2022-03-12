package DoisCirculos;

public class TestaCirculo {

    public static void main(String[] args) {
    Circulo a = new Circulo();
    Circulo b = new Circulo(5,4);
   
    System.out.println("-----------------");
    System.out.println("Raio do circulo a: "+a.getY());
    System.out.println("Raio do circulo b: "+b.getY());
    System.out.println("-----------------");
    System.out.println("Distancia entre os dois circulos: " + a.distancia(b));
    System.out.println("-----------------");
    System.out.println("Área do circulo a: " + a.calcularArea());
    System.out.println("Área do circulo b: " + b.calcularArea());
    System.out.println("-----------------");
   
    
    }  
}
