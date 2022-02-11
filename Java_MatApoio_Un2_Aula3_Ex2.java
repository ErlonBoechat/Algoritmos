/* Sabendo que todo livro possui autor, editora e preço, 
crie uma classe pública com construtor padrão e métodos 
modificadores e de acesso. Depois, crie dois livros com 
dados obtidos via console.
*/

public class Livro {
    
    private String Autor;
    private String Editora;
    private float Preco;

    public Livro(String Autor, String Editora, float Preco) {
        this.Autor = Autor;
        this.Editora = Editora;
        this.Preco = Preco;
    }

    public String getAutor() {
        return Autor;
    }

    public void setAutor(String Autor) {
        this.Autor = Autor;
    }

    public String getEditora() {
        return Editora;
    }

    public void setEditora(String Editora) {
        this.Editora = Editora;
    }

    public float getPreco() {
        return Preco;
    }

    public void setPreco(float Preco) {
        this.Preco = Preco;
    }
    


}
