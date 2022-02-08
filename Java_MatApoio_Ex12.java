/*
Ler notas de alunos ate que o usuario digite -1. Ao 
final imprimir a quantidade de alunos, a media da turma, 
a maior nota e a menor nota.
*/

import java.util.Scanner;
class NotaAlunos{
    public static void main(String[] arg){
        
        float nota=0,total=0,min=10,max=0;
        int c=0;
        
        Scanner s = new Scanner(System.in);
        
        while(nota!=-1)
        {
           System.out.print("Nota do "+(c+1)+" aluno: ");
           nota = s.nextFloat();
           c++;
           total+=nota;
           
           if(nota>max) max=nota;
           else if(nota>-1 && nota<min) min=nota;
           
        }
        
        System.out.print("\n-------------------\n");
        System.out.print("Quantidade: "+(c-1)+"\n");
        System.out.print("Media: "+((total+1)/(c-1))+"\n");
        System.out.print("Maior: "+max+"\n");
        System.out.print("Menor: "+min+"\n");
    }
}
