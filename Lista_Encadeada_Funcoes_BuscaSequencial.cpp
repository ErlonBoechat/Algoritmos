int buscaSequencial(nodo *ptr, int valor)
{
   while(ptr)
   {
      if(ptr->info==valor)
         return 1;
      ptr=ptr->prox;
   }
   return 0; 
}