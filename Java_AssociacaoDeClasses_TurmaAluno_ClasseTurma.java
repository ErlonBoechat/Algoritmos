
package TurmaAluno;

import java.util.Arrays;

public class Turma {
    
    private Aluno StGroup[];
    
    public Turma(Aluno a[])
    {
        this.StGroup=a;
    }

    public boolean add(Aluno a[]){
        
       for(int x=0;x<StGroup.length;x++)
       {
           if(a[x].getRegistration()!=this.StGroup[x].getRegistration()){
               
               this.StGroup[x]=a[x];
               return true;
           }
        
           else{
               
           }         
       }
       return true;
    }

    public Aluno[] getStGroup() {
        return StGroup;
    }

    public void setStGroup(Aluno[] StGroup) {
        this.StGroup = StGroup;
    }

    @Override
    public String toString() {
        return "Turma{" + "StGroup=" + Arrays.toString(StGroup) + '}';
    }
    
}
