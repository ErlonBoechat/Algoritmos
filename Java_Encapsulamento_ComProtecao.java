class Encapsulado {

   private int comProtecao; // modificador de acesso de restrição máxima

      public void setComProtecao(int comProtecao) {
         this.comProtecao = comProtecao;
      }
      
      public int getComProtecao () {
          return this.comProtecao;       
      }
}

class TesteEncapsulado {

   public static void main(String[] args) {

      Encapsulado e = new Encapsulado(); // instância de Encapsulado
      
     // e.comProtecao = 10; dá erro, Não é possível acessar o atributo diretamente
      
      e.setComProtecao (10); //deve-se acessar de forma indireta, encapsulada
      
      System.out.println("Valor com protecao: " + e.getComProtecao ());
      
   }
}
