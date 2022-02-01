import java.util.Scanner;
class MultiploCinco {
    public static void main(String[] args) {
        int num;
        
        Scanner s = new Scanner(System.in);
        System.out.print("Digite o valor: ");
        num = s.nextInt();
        
        if(num%5==0)
        System.out.print("E multiplo de 5");
        else
        System.out.print("Nao e multiplo de 5");
        
    }
}