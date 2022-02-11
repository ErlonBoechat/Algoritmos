

public class LivroMain {
    public static void main(String[] args) {
       
        Livro x = new Livro("Autor 1", "Oreilly",79.9f);
        Livro y = new Livro("Autor 2", "Cambridge",89.9f);
        
        System.out.println(x.getAutor());
        System.out.println(x.getEditora());
        System.out.println(x.getPreco());
        
        System.out.println(y.getAutor());
        System.out.println(y.getEditora());
        System.out.println(y.getPreco());
    }
    
}