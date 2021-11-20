void exibePrimeiro(nodo *flista)
{
   if(!flista)
      cout<<"\nLista vaizia\n";
   else
      cout<<"\n Primeiro da fila: "<<flista->info;   
}