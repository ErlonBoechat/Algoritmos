import java.util.Scanner;
class NotaAlunos {
    public static void main(String[] args) {
        
        int n=0;
        float media,soma=0;
        
        Scanner read = new Scanner(System.in);
        
        System.out.print("Digite o numero de alunos: ");
        n = read.nextInt();
        
        for(int x=0;x<20;x++)
           System.out.print("-");
        System.out.println(" ");
        
        float nota[] = new float[n]; //precisa ser inicializado depois da atribuicao de valor a 'n'
        //substituindo o for por while:
        int c=0; //expr_inicializacao
        while(c<n) //expr_logica
        {
            System.out.print("\nDigite a nota do "+(c+1)+" aluno: ");
            nota[c] = read.nextFloat();
            soma+=nota[c];
            c++;//incremento
        }
        
        for(int x=0;x<20;x++)
           System.out.print("-");
        System.out.print("\n");
        
        for(int x=0;x<n;x++)
        {
            System.out.print((x+1)+" aluno :"+ nota[x]+"\n");
        }
        
        for(int x=0;x<20;x++)
           System.out.print("-");
        System.out.print("\n");
        
        
        System.out.print("Media da turma: "+soma/n);
    
    }
}