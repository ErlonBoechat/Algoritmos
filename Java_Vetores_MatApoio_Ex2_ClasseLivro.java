/*

2) Escreva um programa em Java pra criar um vetor de livros, sabendo que cada livro
possui código, autor, título, editora e preço. Após a criação dos livros, faça o que se pede:

a) apresente todos os dados de todos os livros.
b) apresente os preços e códigos dos livros de um determinado autor passado como parâmetro.
c) apresente os códigos e títulos, em maiúsculas, dos livros que custam abaixo de um preço previamente obtido via console.

*/

package VetorLivros;

public class Livro {
    
    int codigo;
    String autor;
    String titulo;
    String editora;
    float preco;

    public Livro(int codigo, String autor, String titulo, String editora, float preco) {
        this.codigo = codigo;
        this.autor = autor;
        this.titulo = titulo;
        this.editora = editora;
        this.preco = preco;
    }

    public int getCodigo() {
        return codigo;
    }
    
    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getEditora() {
        return editora;
    }

    public void setEditora(String editora) {
        this.editora = editora;
    }

    public float getPreco() {
        return preco;
    }

    public void setPreco(float preco) {
        this.preco = preco;
    }

    @Override
    public String toString() {
        return "* cod: " + codigo + "\nautor: " + autor + "\ntitulo: " + titulo + "\neditora: " + editora + "\npreco: R$ " + preco +" ";
    }
}
