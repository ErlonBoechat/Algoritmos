package PackComposicao;

public class NumeroAleatorio {
    
     private String nome;
     private Aleatorio valor;

        NumeroAleatorio(String nome, int valor) {

           this.nome = nome;
           this.valor = new Aleatorio(valor);
        }
}