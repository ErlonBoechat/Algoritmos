                      Empilha (Push)

//implementação:

cout<<"Digite o valor a ser empilhado";
cin>>val;
empilha(pilha, topo, val);


//Função:

void empilha(int p[], int &t, int v)
{
   if(t--TAM-1)
      cout<<"\nAtencao! Pilha cheia\n";
      else
      {
         t++ //atualiza o topo
         p[t]=v; //pilha recebe o valor
      }
}
