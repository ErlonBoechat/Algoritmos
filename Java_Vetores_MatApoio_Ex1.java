/*
1) Escreva um programa em Java para ler as notas de uma 
turma e imprimir a média da turma e as notas acima da 
média. O programa deverá pedir, inicialmente, o total de 
notas que serão lidas.
*/

import java.util.Scanner;
public class Vetor {
   public static void main(String[] args) {

    int tNotas=0, c=0;
    float notas[],media=0,soma=0;
    
    Scanner tn = new Scanner(System.in);
    Scanner n = new Scanner(System.in);
   
    System.out.print("Total de notas: ");
    tNotas = tn.nextInt();
    
    notas = new float[tNotas]; //vetor inicializado depois do valor de tNotas

    System.out.println("----------------\n");
    
    for(c=0;c<tNotas;c++)
    {
        System.out.print("Digite a "+(c+1)+"a nota: ");
        notas[c] = n.nextFloat();
        soma+=notas[c];
    }
    System.out.println("----------------\n");
    media=soma/tNotas;
    
    System.out.println("Media das notas: "+media);
    System.out.println("----------------\n");
    System.out.println("Notas acima da media\n");
    
    for(c=0;c<tNotas;c++)
    {
        if(notas[c]>media)
        System.out.println(notas[c]+"\n");
    }
  }
}

/*

Saida: 

Total de notas: 5
----------------
Digite a 1a nota: 7
Digite a 2a nota: 5
Digite a 3a nota: 9
Digite a 4a nota: 8
Digite a 5a nota: 5
----------------
Media das notas: 6.8
----------------
Notas acima da media:

7.0
9.0
8.0

*/
