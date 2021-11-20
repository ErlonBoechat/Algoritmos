void exibeLista(nodo *flista)
{
   if(!flista)
      cout<<"\nLista vazia";
   else
      while(flista)
         cout<<"\n"<<flista-info;
         flista=flista->prox;
}