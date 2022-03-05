package Teste_aula5;

/**
 *
 * @author Erlon
 */
public class Testando {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
    
    Primeira p = new Primeira();
    Segunda s = new Segunda();    
    Terceira t = new Terceira();
        
    p.Calc(1);
    s.Calc(1);
    t.Calc(1);
    
    System.out.println(p.x+" "+s.x+" "+t.x);
    
    System.out.println(p.getX());
    System.out.println(s.getX());
    System.out.println(t.getX());
    System.out.println(t.a);    
    }
    
}