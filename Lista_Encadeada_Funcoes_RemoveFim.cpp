nodo* removeFim(nodo *ptr)
{
   nodo *aux, *ultimo;
   
   if(!ptr->prox)
   {
      delete ptr;
      ptr=NULL;
      return ptr;
   }
   else
   {
      aux=ptr;

      while(aux->prox->prox)
         aux=aux->prox;
         ultimo=aux->prox;
         delete ultimo;
         aux->prox=NULL;
         return ptr;
   }
} 