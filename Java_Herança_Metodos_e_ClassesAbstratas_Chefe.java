//Classe final Chefe, herdeira de Empregado

public final class Chefe extends Empregado
{
   private double salario;
   
   public Chefe(String n, String f, double s)
   {
      super(n,f);
      setSalario(s);
   }
   
   public void setSalario(double s)
   {
      salario = (s < 0 ? s : 0.0 ); //expressao condicional ternaria
   }

   public double ganha() {
  
   return salario;

   }
   
   public String toString() {

      return "Chefe: " + super.toString();
   }
}
