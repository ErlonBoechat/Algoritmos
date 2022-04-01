package TurmaAluno;

public class Turma {
    
    Aluno StGroup[];
  
    
    public boolean adicionar(Aluno a){
        
       for(int x=0;x<10;x++)
       {
           if(a.getRegistration()!=this.StGroup[x].getRegistration()){
               
               this.StGroup[x]=a;
               return true;
           }
        
           else{
               
           }         
       }
       return true;
    }  
}