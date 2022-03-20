package VetorLivros;
import java.util.Scanner;
public class Client {

    public static void main(String[] args) {
    
        //public Livro(int codigo, String autor, String titulo, String editora, float preco)
        
        Livro a[] = new Livro[5];
        a[0] = new Livro(1,"Leon Tolstoy","Guerra e Paz","Leia",78.90f);
        a[1] = new Livro(2,"G. Garcia Marquez","Cem anos de Solidão","Estante",67.99f);
        a[2] = new Livro(3,"Fiódor Dostoiévski","Crime e Castigo","Pensar",103.90f);
        a[3] = new Livro(4,"Jean Paul Sartre","O Ser e o Nada","Mundo",56.10f);
        a[4] = new Livro(5,"Honoré de Balzac","A Mulher de Trinta Anos","Futuro",74.99f);
        
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
        System.out.println(" ");
        System.out.print("Digite o valor: ");
        preco = s.nextFloat();
        System.out.println("\n--------------------");
        
        for(int c=0;c<5;c++)
        {
            while(a[c].getPreco()<preco)
            {
                System.out.println(" ");
                System.out.println("codigo: "+a[c].getCodigo());
                System.out.println("titulo: "+a[c].getTitulo().toUpperCase());
                System.out.println("preco: R$ "+a[c].getPreco());
                System.out.println("--------------------");
                break;
            }
        }
    }   
}

/*
2) Escreva um programa em Java pra criar um vetor de livros, sabendo que cada 
   livro possui código, autor, título, editora e preço. Após a criação dos 
   livros, faça o que se pede:

a) apresente todos os dados de todos os livros.

b) apresente os preços e códigos dos livros de um determinado autor passado 
   como parâmetro.

c) apresente os códigos e títulos, em maiúsculas, dos livros que custam abaixo 
   de um preço previamente obtido via console.


run:
--------------------
* cod: 1
autor: Leon Tolstoy
titulo: Guerra e Paz
editora: Leia
preco: R$ 78.9 
--------------------
* cod: 2
autor: G. Garcia Marquez
titulo: Cem anos de Solidão
editora: Estante
preco: R$ 67.99 
--------------------
* cod: 3
autor: Fiódor Dostoiévski
titulo: Crime e Castigo
editora: Pensar
preco: R$ 103.9 
--------------------
* cod: 4
autor: Jean Paul Sartre
titulo: O Ser e o Nada
editora: Mundo
preco: R$ 56.1 
--------------------
* cod: 5
autor: Honoré de Balzac
titulo: A Mulher de Trinta Anos
editora: Futuro
preco: R$ 74.99 
--------------------
 
Digite o valor: 100

--------------------
 
codigo: 1
titulo: GUERRA E PAZ
preco: 78.9
--------------------
 
codigo: 2
titulo: CEM ANOS DE SOLIDÃO
preco: 67.99
--------------------
 
codigo: 4
titulo: O SER E O NADA
preco: 56.1
--------------------
 
codigo: 5
titulo: A MULHER DE TRINTA ANOS
preco: 74.99
--------------------

*/
