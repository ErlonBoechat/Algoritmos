public class Livro {
    
    private String Titulo;
    private String Editora;
    private int Paginas;

    public Livro(String Titulo, String Editora, int Paginas) {
        this.Titulo = Titulo;
        this.Editora = Editora;
        this.Paginas = Paginas;
    }

    public String getTitulo() {
        return Titulo;
    }

    public void setTitulo(String Titulo) {
        this.Titulo = Titulo;
    }

    public String getEditora() {
        return Editora;
    }

    public void setEditora(String Editora) {
        this.Editora = Editora;
    }

    public int getPaginas() {
        return Paginas;
    }

    public void setPaginas(int Paginas) {
        this.Paginas = Paginas;
    }
    
    
}