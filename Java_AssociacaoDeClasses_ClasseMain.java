/*

1) Monte um projeto com as classes Carro e Motor, onde o 
carro possui modelo (string) e um motor e o motor possui 
uma cilindrada (float). Em seguida, implemente na classe
Carro o método:

              float velocidadeMaxima()

que calcula a velocidade máxima do carro baseada na 
cilindrada do motor:

· Até 1.0: 140Km/k
· Acima de 1.0 até 1.6: 180Km/h
· Acima de 1.6 até 2.0: 220Km/h
· Acima de 2.0: 260Km/h

Por fim, crie instâncias da classe Carro com motores de 
cilindradas iguais e diferentes.

*/

package CarroMotor;

public class Main {

    public static void main(String[] args) {
       
        Carro []n = new Carro[5];
        Motor []m = new Motor[4];
        
        m[0] = new Motor();
        m[1] = new Motor();
        m[2] = new Motor();
        m[3] = new Motor();
        
        m[0].cc=1.0f;
        m[1].cc=1.6f;
        m[2].cc=2.0f;
        m[3].cc=3.0f;
        
        n[0] = new Carro("Mercedes",m[3]);
        n[1] = new Carro("Volkswagen",m[1]);
        n[2] = new Carro("Fiat",m[0]);
        n[3] = new Carro("Ford",m[2]);
        n[4] = new Carro("Chevrolet",m[1]);
        
        for(int x=0;x<5;x++)
        {
            System.out.println("");
            System.out.println(n[x].toString());
            System.out.print("Velocidade máxima: "); n[x].velocidadeMaxima(); 
            System.out.println("------------------");
        }
        
        System.out.println("");
    }
}   

/*

Saída: 

Modelo: Mercedes | Cilindrada: 3.0
Velocidade máxima: 260km/h
------------------

Modelo: Volkswagen | Cilindrada: 1.6
Velocidade máxima: 180km/h
------------------

Modelo: Fiat | Cilindrada: 1.0
Velocidade máxima: 140km/h
------------------

Modelo: Ford | Cilindrada: 2.0
Velocidade máxima: 220km/h
------------------

Modelo: Chevrolet | Cilindrada: 1.6
Velocidade máxima: 180km/h
------------------

*/
