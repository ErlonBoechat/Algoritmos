class Encapsulado {

   private int comProtecao; 

      public void setComProtecao(int comProtecao) {
         this.comProtecao = comProtecao;
      }
      
      public int getComProtecao () {
          return this.comProtecao;       
      }
}

class TesteEncapsulado {

   public static void main(String[] args) {

      Encapsulado e = new Encapsulado(); 
      
     // e.comProtecao = 10; 
      
      e.setComProtecao (10);
      
      System.out.println("Valor com protecao: " + e.getComProtecao ());
      
   }
}