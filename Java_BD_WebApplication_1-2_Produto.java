package javabancodedados;

import jakarta.enterprise.context.RequestScoped;
import jakarta.inject.Named;
import java.io.Serializable;

@Named(value="produto")
@RequestScoped

public class Produto implements Serializable {
    private int codigo;
    private String nome;
    private int quantidade;
    
    public Produto(){}
    
    public Produto(int codigo,String nome,int quantidade) {
        
        this.codigo=codigo;
        this.nome=nome;
        this.quantidade=quantidade;
    }
    
    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getQuantidade() {
        return quantidade;
    }

    public void setQuantidade(int quantidade) {
        this.quantidade = quantidade;
    }   
}