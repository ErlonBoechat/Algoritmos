public class LivroMain {
    public static void main(String[] args) {
       
        Livro x = new Livro("Autor 1", "Oreilly",79.9f);
        Livro y = new Livro("Harlan Coben", "Arqueiro",30.0f);


        if(x.getPreco() < y.getPreco()) {
            System.out.println(x.getAutor());
            System.out.println(x.getEditora());
            System.out.println(x.getPreco());
        }
        else{
            System.out.println(y.getAutor());
            System.out.println(y.getEditora());
            System.out.println(y.getPreco());
        }
    }   
}