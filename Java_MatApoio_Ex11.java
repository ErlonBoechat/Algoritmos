/*
Ler um numero de alunos n. Em seguida, ler as notas dos n alunos e imprimir, ao
final, a media da turma. Faca uma solucao com for e outra solucao com while.
continua... */

import java.util.Scanner;
class NotaAlunos {
    public static void main(String[] args) {
        
        int n=0;
        float media;
        
        Scanner read = new Scanner(System.in);
        
        System.out.print("Digite o numero de alunos: ");
        n = read.nextInt();
        
        
        for(int x=0;x<20;x++)
        System.out.print("-");
        System.out.println(" ");
        
        float nota[] = new float[n]; //precisa ser inicializado DEPOIS de atribuirmos valor a 'n'
        
        for(int c=0;c<n;c++)
        {
            System.out.print("\nDigite a nota do "+(c+1)+" aluno: ");
            nota[c] = read.nextFloat();
        }
    
    }
}
