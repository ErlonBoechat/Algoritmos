situacaoPilha(pilha,topo);

void situacaoPilha(int p[], int &t)
{
   
   if(t == -1)
      cout<<"\nATENCAO.Pilha Vazia\n";
   else if(t == TAM)
      cout<<"\nATENCAO.Pilha Cheia\n";
   else	
   {
      cout<<"\nTotal de elementos na pilha: "<<t+1<<"\n";
      cout<<"\n\nEspaco disponivel na pilha:"<<TAM-(t+1)<<"\n";
   }
}