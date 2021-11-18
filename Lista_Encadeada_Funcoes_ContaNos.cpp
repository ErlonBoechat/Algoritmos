int contaNos(nodo *ptr)
{
   int conta=0;
  
   while(ptr)
   {
      conta++;
      ptr=ptr->prox;
   }
   return conta;
}