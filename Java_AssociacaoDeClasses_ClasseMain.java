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
        
        /*
        System.out.println(n[0].modelo +" "+ n[3].novo);
        System.out.println(n[1].modelo +" "+ n[1].novo);
        System.out.println(n[2].modelo +" "+ n[0].novo);
        System.out.println(n[3].modelo +" "+ n[2].novo);
        System.out.println(n[4].modelo +" "+ n[1].novo);
        */
        
        for(int x=0;x<5;x++)
        {
           System.out.println(n[x].toString());
            System.out.print("Velocidade máxima: "); n[x].velocidadeMaxima(); 
           System.out.println("-----------------");
        }
    }
}   