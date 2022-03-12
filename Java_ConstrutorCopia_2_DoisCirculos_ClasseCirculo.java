package DoisCirculos;

public class Circulo {
    private float x;
    private float y;
    
    Circulo()
    {
        x=7;
        y=3;
    }
    
    Circulo(float pt, float ln)
    {
        x=pt;
        y=ln;
    }

    public float getX() {
        return x;
    }

    public void setX(float x) {
        this.x = x;
    }

    public float getY() {
        return y;
    }

    public void setY(float y) {
        this.y = y;
    }
     
    float distancia(Circulo outro)
    {
       float distancia;
       
       distancia=outro.x-y;
       return distancia; 
    }
    
    float calcularArea()
            // fórmula: A = π r²
    {
        float area;
        area = (float) (Math.PI*Math.pow(this.y, 2));
        return area;   
    }
    
    float calcularPerimetro()
            // fórmula: C = 2 * π * r, onde: C = comprimento da circunferência ou perímetro.
    {
        float perimetro;
        perimetro = (float) (2*Math.PI*this.y);
        return perimetro;
    }
    
    void imprimirDados()
    {
       System.out.println("Raio do circulo: " + this.getY());
       System.out.println("Área do circulo: " + this.calcularArea());
       System.out.println("Perímetro do circulo: " + this.calcularPerimetro());
    }
}
