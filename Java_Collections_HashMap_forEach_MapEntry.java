import java.util.HashMap;
import java.util.Scanner;
import java.util.Map;

public class Exemplo022 {

	public static void main (String[] args) {

		Scanner teclado = new Scanner(System.in);

		HashMap<Integer,String> produtos = new HashMap<>(); // "produtos" no plural porque se trata de uma coleção

		int opcao = -1; // inicialização para corrigir o erro "variable opcao might not have been initialized } while(opcao!=0);" 

		   do {

		   	  try {

			     System.out.println("\nDigite 1 para incluir, "+
				     "2 para consultar, 3 para listar, 0 para sair");
			     opcao = teclado.nextInt();

			     switch(opcao) {

			     case 1: 
			         System.out.println("Codigo do novo produto: ");
				     int codigoN = teclado.nextInt();
				     System.out.println("Nome do novo produto: ");
				     String nomeN = teclado.next();

				     produtos.put(codigoN, nomeN);
				     break;

			     case 2:
				     System.out.println("Digite o codigo");
				     int codigo = teclado.nextInt();
				     String nome = produtos.get(codigo);

				     if(nome!=null)
					     System.out.println(nome);
				     break;
			      

			     case 3:

			     	 for(Map.Entry<Integer, String> x: produtos.entrySet()) // iteração sobre as entradas do mapa (objetos Map.Entry). Cada Map.Entry representa um par chave-valor no 'HashMap'
			         System.out.println(x);
			         break;
			    }  

			    } catch(Exception e) {
			    	System.out.println("Ops! Formato incorreto");
			    	opcao=-1;
                    teclado.next(); // Consumir a entrada errônea
			    }	

			} while(opcao!=0); teclado.close(); // Fechar o Scanner quando terminar		    
	}
}