/*
Qual(is) saída(s) após a execução do código abaixo?
class Primeira { int x = 20; void Calc(int aux1) { x*=aux1; } }
class Segunda extends Primeira { void Calc(int aux2) { x+=aux2; } }
class Terceira extends Segunda { String a = "Sistema de Informação"; }
class Testando { public static void main(String[] args) {
Terceira t = new Terceira();
Primeira p = new Primeira();
t.Calc(3);
System.out.print(t.x+" "+p.x); }
}
*/

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
