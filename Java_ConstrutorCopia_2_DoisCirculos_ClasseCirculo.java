package DoisCirculos;

public class Circulo {
    private float x;
    private float y;
    private float r;
    
    Circulo()
    {
        x=7;
        y=3;
        r=x-y;
    }
    
    Circulo(float pt, float ln)
    {
        x=pt;
        y=ln;
        r=pt-ln;
    }
    
    Circulo(Circulo outro)
    {
        x = outro.x;
        y = outro.y;
        r = outro.x-outro.y;
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

    public float getR() {
        return r;
    }

    public void setR(float r) {
        this.r = r;
    }

    
    float distancia(Circulo outroCirculo)
    {
       return 0; 
    }
}