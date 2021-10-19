#include<iostream>
#include<cstdlib>
#define TAM 100
using namespace std;

void push(float p[], int &t, float v);
float pop(float p[], int &t);

int main()
{
   int t=-1;
   float a, b, p[TAM];
   char s[10];
   
   system("color f1");
   cout<<"\n***************************************************";
   cout<<"\n*   Calculadora para quatro operacoes pos-fixa    *";
   cout<<"\n*         Digite numeros ou operadores            *";
   cout<<"\n*             Digite s para sair                  *";
   cout<<"\n***************************************************";

   do
   {
   cout<<"\n";	
   cout<<": ";
   cin>>s;
   
   switch(s[0])
   {
      case '+':
	           a=pop(p,t);
	           b=pop(p,t);
	           cout<<"\n"<<a+b<<"\n";
	           push(p, t, a+b);
	           break;  
	  case '-':
	           a=pop(p,t);
	           b=pop(p,t);
	           cout<<"\n"<<b-a<<"\n";
	           push(p,t,b-a);
	           break;
	 case '*':
	           a=pop(p,t);
	           b=pop(p,t);
	           cout<<"\n"<<b-a<<"\n";
	           push(p,t,b*a);
	           break;	   
	  case '/':
	           a=pop(p,t);
			   b=pop(p,t);
			   
			   if(a==0)
			      cout<<"Divisao por 0";
			   else
			   {
			      cout<<"\n"<<b/a<<"\n";
			      push(p,t,b/a);
		       }
		       break;
	
	default: push(p,t, atof(s));           
   }           
 }while(s[0]!='s');
 
 system("pause");

}

//insere o elemento na pilha
void push(float p[], int &t, float v)
{
   if(t==TAM-1)
      cout<<"\nAtencao! Pilha cheia.\n";
   else
   {
      t++; //atualiza o topo	
      p[t]=v; //pilha recebe valor
   }
}

//remove o elemento da pilha
float pop(float p[], int &t)
{
	float v;
	
	if(t==-1)
	{
	   cout<<"\nAtencao! Pilha vazia";
	   return 0;
    }
    else
    {
    	v=p[t];//guarda o valor no topo
    	t--; //atualiza o topo
    	return v;
	}
}
