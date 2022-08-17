package Secao4_EstruturaSequencial;

import java.util.Locale;

public class SaidaDeDados {

	public static void main(String[] args) {

		System.out.print("Olá, Mundo!"); // o "print" não oferece quebra de linha
		System.out.println("Olá, Mundo!");
		
		// variável de ponto flutuante
		
		float x = 3.67456467475467456456f;
		
		Locale.setDefault(Locale.US);		
		System.out.printf("%.2f\n", x);//printf (format). "Porcento, ponto, 2f; porcento n (quebra de linha)"; variável que se quer imprimir
		                 //padrão de máscara de formatação		
		System.out.printf("%.2f\n", x);
		
	}
}
