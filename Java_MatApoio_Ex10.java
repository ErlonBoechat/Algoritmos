import java.util.Scanner;
class OpAritmetica {
    public static void main(String[] args) {
    
       char op;
       float a,b;
       
       Scanner s = new Scanner(System.in);
       
      System.out.print("\nDigite a operacao: ");
      op = s.next().charAt(0); 
      
      System.out.print("\nDigite o primeiro numero: ");
      a = s.nextInt();
      
      System.out.print("\nDigite o segundo numero: ");
      b = s.nextInt();
     
    for(int x=0;x<10;x++)
    System.out.print("-");
    
    
    if(op=='+')
        System.out.print("\n"+a+" + "+b+" = "+(a+b)); 
       
    else if(op=='-')
        System.out.print("\n"+a+" - "+b+" = "+(a-b));

    else if(op=='/')
        System.out.print("\n"+a+" / "+b+" = "+(a/b));
    
    else if(op=='*')
        System.out.print("\n"+a+" * "+b+" = "+(a*b));
    
    else
        System.out.print("\nValor incorreto");
    
  }
}