#include<iostream>
#define TAM 40
using namespace std;

void empilha(int p[], int &t, int v);
int desempilha(int p[], int &t, int &v);
void barra();

int main()
{
   float n; //para possibilitar a entrada de número maior que o inteiro permite
   int num, resto, pilha[TAM], sinal, topo=-1;

   system("color 2f");
   cout<<"\n############################################################";
   cout<<"\n###                                                      ###";
   cout<<"\n### Converte Numero da base decimal para base binaria    ###";
   cout<<"\n###                                                      ###";
   cout<<"\n############################################################";
   cout<<"\n\nDigite um numero positivo: ";
   cin>>n;
  
   if(n>2147483520 || n<-2147483520)
      exit(0); // limita intervalo de inteiro do Dev-Cpp, embora seja maior
   else
      num=(int)n; //converte real para inteiro      
       
   while(num>=0)
   {
       do //inicio do trecho que empilha os restos que irão gerar o numero binario
       {
          resto=num%2;
          empilha(pilha,topo,resto);
          num/=2;
       }while(num>0); //fim do trecho de empilhamento
       
       cout<<"\nConvertido para binario: ";
       sinal=desempilha(pilha,topo,resto); //inicio do trecho que desempilha todos 
    
       while(sinal==1)
       {
          cout<<resto;
          sinal=desempilha(pilha,topo,resto);   
       } //fim do trecho de desempilhamento
       topo=-1;
          barra();
       cout<<"\n\nDigite um numero positivo: ";
       cin>>n;
       
       if(n>2147483520 || n<-2147483520)
          exit(0); //maximo permitido no Dev Cpp
       else num=(int)n;
   }
   cout<<"\n\n";
   system("pause");
}

void empilha(int p[], int &t, int v)
{
   if(t==TAM-1)//este teste não é o necessário porque já limitei a entrada
      cout<<"\nAtenção! Pilha cheia\n";
   else
   {
      t++; //atualiza o topo
      p[t]=v; //pilha recebe valor    
   }   
}

int desempilha(int p[], int &t, int &v)
{
   if(t==-1)
      return 0;
   else
   {
      v=p[t]; //guarda o valor do topo
      t--; //atualiza o topo
      return 1;
   }
}

void barra()
{
   cout<<"\n";     	
   for(int x=1;x<40;x++)
	   cout<<"-"; 
}       
