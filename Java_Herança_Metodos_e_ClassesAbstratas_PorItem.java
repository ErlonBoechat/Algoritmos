// Por Item: valor por produção * quantidade produzida

Public final class PorItem extends Empregado
{
   private double producao; // salario por producao
   private int quantidade; // quantidade produzida
   
   public PorItem(String n, String f, double p, int q)
   {
      super(n,f);
      setProducao(p);
      setQuantidade(q);
   }
   
   public void setProducao(double p)
   {
      producao = (p > 0 ? p : 0.0); //expressao condicional ternaria
    
   }
   
   public void setQuantidade(int q)
   {
      quantidade = (q > 0 ? q : 0);

   }
   
   public double ganha()
   {
      return producao*quantidade;
      
   }
   
   public String toString()
   {
      return "Por item: " + super.toString();
   }

}
