                   Acesso ao topo (Pop)

//implementação
acessoTopo(pilha,topo);


//função
void acessoTopo(int p[], int &t)
{
   if(t==-1)
      cout<<"\nAtencao! Pilha vazia\n";
   else
      cout<<"\nElemento do topo da pilha: "<<p[t];
}