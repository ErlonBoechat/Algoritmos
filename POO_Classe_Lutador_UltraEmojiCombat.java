package ultraemojicombat;
public class Lutador {   
   //atributos
    private String nome;
    private String nacionalidade;
    private int idade;
    private float altura;
    private float peso;
    private String categoria;
    private int vitorias, derrotas, empates;

    //métodos públicos
public void apresentar()
{
    System.out.println("Lutador: "+this.getNome());
    System.out.println("Origem: "+this.getNacionalidade());
    System.out.println(this.getIdade()+" anos");
    System.out.println(this.getAltura()+"m");
    System.out.println("Peso: "+this.getPeso()+"kg");
    System.out.println("Vitórias: "+this.getVitorias());
    System.out.println("Derrotas: "+this.getDerrotas());
    System.out.println("Empates: "+this.getEmpates());
}
public void status()
{
    System.out.println(this.getNome());
    System.out.println("Categoria: "+this.getCategoria());
    System.out.println(getVitorias()+" vitórias");
    System.out.println(getDerrotas()+" Derrotas");
    System.out.println(getEmpates()+" Empates");
}
public void ganharLuta()
{
    this.setVitorias(this.getVitorias()+1);
}
public void perderLuta()
{
    this.setDerrotas(this.getDerrotas()+1);
}
public void empatarLuta()
{
    this.setEmpates(this.getEmpates()+1);
}

//métodos especiais

    public Lutador(String no, String na, int id, float al, float pe, int vi, int de, int em) {
        this.nome = no;
        this.nacionalidade = na;
        this.idade = id;
        this.altura = al;
        this.setPeso(pe);
        this.vitorias = vi;
        this.derrotas = de;
        this.empates = em;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNacionalidade() {
        return nacionalidade;
    }

    public void setNacionalidade(String nacionalidade) {
        this.nacionalidade = nacionalidade;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public float getAltura() {
        return altura;
    }

    public void setAltura(float altura) {
        this.altura = altura;
    }

    public float getPeso() {
        return peso;
    }

    public void setPeso(float peso) {
        this.peso = peso;
        this.setCategoria();
    }

    public String getCategoria() {
        return categoria;
    }

    private void setCategoria() {
        if(this.peso<52.2)
        {
            this.categoria="Categoria inválida. Está abaixo do peso mínimo";
        }
        else if(this.peso<=70.3)
        { 
            this.categoria="Leve";
        }
        else if(this.peso<=83.9)
        {
            this.categoria="Médio";
        }
        else if(this.peso<=120.2)
        {
            this.categoria="Pesado";
        }
        else
        {
            this.categoria="Categoria inválida: Acima do peso máximo.";
        }
    }

    public int getVitorias() {
        return vitorias;
    }

    public void setVitorias(int vitorias) {
        this.vitorias = vitorias;
    }

    public int getDerrotas() {
        return derrotas;
    }

    public void setDerrotas(int derrotas) {
        this.derrotas = derrotas;
    }

    public int getEmpates() {
        return empates;
    }
    
    public void setEmpates(int empates) {
        this.empates = empates;
    }
}
