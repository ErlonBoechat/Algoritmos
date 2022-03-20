package VetorLivros;
import java.util.Scanner;
public class Client {

    public static void main(String[] args) {
    
        //public Livro(int codigo, String autor, String titulo, String editora, float preco)
        
        Livro a[] = new Livro[5];
        a[0] = new Livro(1,"Leon Tolstoy","Guerra e Paz","Leia",78.90f);
        a[1] = new Livro(2,"G. Garcia Marquez","100 anos de Solidão","Estante",67.99f);
        a[2] = new Livro(3,"Fiodor Dostoievski","Crime e Castigo","Pensar",103.90f);
        a[3] = new Livro(4,"Jean Paul Sartre","O Ser e o Nada","Mundo",56.10f);
        a[4] = new Livro(5,"Honoré de Balzac","A Mulher de 30 Anos","Futuro",56.10f);
        
        System.out.println("--------------------");       
        System.out.println(a[0].toString());
        System.out.println("--------------------");  
        System.out.println(a[1].toString());
        System.out.println("--------------------");  
        System.out.println(a[2].toString());
        System.out.println("--------------------");  
        System.out.println(a[3].toString());
        System.out.println("--------------------");  
        System.out.println(a[4].toString());
        
        System.out.println("--------------------");
        
        Scanner s = new Scanner(System.in);
        float preco;
        System.out.print("Digite o valor: ");
        preco = s.nextFloat();
        System.out.println("\n--------------------");

       
        for(int c=0;c<5;c++)
        {
            if(preco>a[c].getPreco())
            {
                System.out.println(" ");
                System.out.println("codigo: "+a[c].getCodigo());
                System.out.println("titulo: "+a[c].getTitulo());
                System.out.println("--------------------");
            }
            else
            {
                System.out.println("Nenhum livro encontrado.");
                System.out.println("--------------------");
                break;
            }
        }
    }   
}