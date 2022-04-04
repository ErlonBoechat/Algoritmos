
package TurmaAluno;

public class Turma {
    
    private int StAmount;
    protected Aluno[] Student;
    
    public Turma(int n)
    {
        this.Student = new Aluno[n];
        this.StAmount=n;
    }    
    
    int x=0;
    
    public boolean add(Aluno a){    
        
        this.Student[x]=a;
        x++;
        return true;
    }

    public int getStAmount() {
        return StAmount;
    }

    public void setStAmount(int StAmount) {
        this.StAmount = StAmount;
    }

    public Aluno[] getStudent() {
        return Student;
    }

    public void setStudent(Aluno[] Student) {
        this.Student = Student;
    }
}
