
package CarroMotor;

public class Carro {
    
    String modelo;
    Motor novo;

    public Carro(String modelo, Motor novo) {
        this.modelo = modelo;
        this.novo = novo;
    }
    
    public void velocidadeMaxima()
    {
        if(novo.cc<=1.0f)
        {
            System.out.println("140km/h");    
        } 
        else if (novo.cc>1.0f&&novo.cc<=1.6f){
            
            System.out.println("180km/h");
        }
        else if (novo.cc>1.6f&&novo.cc==2.0f)
        {
            System.out.println("220km/h");
        }
        else
            System.out.println("260km/h");
    }

    @Override
    public String toString() {
        return "Modelo = " + modelo + ", Cilindrada = " + novo;
    }
}