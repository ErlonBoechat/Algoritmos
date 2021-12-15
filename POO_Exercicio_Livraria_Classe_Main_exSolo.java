package com.mycompany.projetolivro;
public class ProjetoLivro {
    public static void main(String[] args) {
        
        Pessoa p[] = new Pessoa[2];
        Livro l[] = new Livro[2];
        
        p[0] = new Pessoa("Erlon",45,"M");
        p[1] = new Pessoa("Maria",33,"F");
        
        l[0] = new Livro("A Origem das Espécies","C. Darwin",502,p[0]);
        l[1] = new Livro("O Capital: Livro 1","C. Marx",574,p[1]);
        
        l[0].fechar();
        System.out.println(l[0].detalhes());
        
        
    }
}
 
