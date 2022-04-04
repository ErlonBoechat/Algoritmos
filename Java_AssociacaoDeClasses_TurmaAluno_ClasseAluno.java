
package TurmaAluno;

public class Aluno {
    
    private String name;
    private int registration;
    private float average;

    public Aluno(String name, int registration, float average) {
        this.name = name;
        this.registration = registration;
        this.average = average;
    }

    
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getRegistration() {
        return registration;
    }

    public void setRegistration(int registration) {
        this.registration = registration;
    }

    public float getAverage() {
        return average;
    }

    public void setAverage(float average) {
        this.average = average;
    }

    @Override
    public String toString() {
        return " Name: " + name + " | Registration: " + registration + " | Average: " + average + "\n";
    }
    
}