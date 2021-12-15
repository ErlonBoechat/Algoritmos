package com.mycompany.projetolivro;
public class ProjetoLivro {
    public static void main(String[] args) {
    Pessoa p = new Pessoa("Erlon",45,"M");
    p.fazerAniver();
        System.out.println(p.getIdade());
        System.out.println(p.getNome());
    
    }
}