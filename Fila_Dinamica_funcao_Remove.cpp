nodo *remove(nodo *flista)
{
   nodo *aux;
   aux=flista;
   flista=flista->prox;
   delete aux;
   return flista;
}