/*
1) Crie um projeto com duas classes : classe Circulo e 
classe TestaCirculo (com a main), sabendo que todo círculo 
tem um raio e um centro no ponto (x,y). Neste projeto ...

a) crie dois círculos : um com valores constantes definidos 
por você e outro com dados obtidos via console.

b) implemente os métodos getters e setters. 

c) use sobrecarga de construtores e crie cada círculo 
(item a) com um construtor.

d) calcule a distância de um círculo a outro. Para isso, 
implemente um método float distancia(Circulo outroCirculo)
que calcula a distância de um círculo a outro.

e) calcule a área de cada círculo. Para isso, implemente 
um método de nome calcularArea.

f) calcule o perímetro de cada círculo. Para isso, 
implemente um método de nome calcularPerimetro.

g) imprima todos os dados de cada círculo. Para isso, 
implemente um método de nome imprimirDados.
*/

package DoisCirculos;

public class Circulo {
    private float x;
    private float y;
    
    Circulo()
    {
        x=5;
        y=12;
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
       
       if(outro.x-x<0)
           distancia=(outro.x-x)*-1;
       
       else
           distancia=outro.x-x;
       
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
