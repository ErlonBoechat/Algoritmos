package DoisCirculos;

public class TestaCirculo {

    public static void main(String[] args) {
    Circulo a = new Circulo();
    Circulo b = new Circulo(5,3);
    Circulo c = new Circulo(b);
    
    System.out.println(a.getR());
    System.out.println(b.getR());
    System.out.println(c.getR());
    
    }  
}