nodo *remove(nodo *plista)
{
   nodo *aux;
   aux=plista;
   plista=plista->prox;
   delete aux;
   return plista;
}