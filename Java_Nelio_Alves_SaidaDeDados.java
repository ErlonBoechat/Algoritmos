package Secao4_EstruturaSequencial;

import java.util.Locale;

public class SaidaDeDados {

	public static void main(String[] args) {

		System.out.println("Olá, Mundo!");
		
		
		// variável de ponto flutuante
		
		float x = 3.67456467475467456456f;
		
		Locale.setDefault(Locale.US);		
		System.out.printf("%.1f\n", x);//printf (format). "Porcento, ponto, 2f; porcento n (quebra de linha)"; variável que se quer imprimir
		                 //padrão de máscara de formatação		
		System.out.printf("%.2f\n", x);
		System.out.printf("%.3f\n", x);
		System.out.printf("%.4f\n", x);
		System.out.printf("%.5f\n", x);
		
		
		// concatenar város elementos em um mesmo comando de escrita
		
		System.out.println("");
		System.out.printf("RESULTADO = %.2f metros\n", x);
		
		/*
		
		output:
		
		Olá, Mundo!
		3.7
                3.67
                3.675
                3.6746
                3.67456
		
		
		
		

                */		

	}
}
