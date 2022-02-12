public abstract class Empregado // como a classe contém um metodo abstrato, deve ser declarada como abstrata
{
   private String nome;
   private String familia;
   
   public Empregado(String n, String f)
   {
      nome = n;
      familia = f;
   }
   
   public String getNome() { return nome; }
   public String getFamilia() { return familia; }
   
   public String toString() 
   {
      return nome + ' ' + familia;
   }

   public abstract double ganha();  // metodo abstrato. Deve ser implementado na subclasse
}