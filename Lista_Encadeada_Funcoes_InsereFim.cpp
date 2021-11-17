nodo* insereFim(nodo *ptr, int valor)
}
   nodo *novo, *aux;
   novo=new nodo;
  
   if(!novo)
   {
      cout<<"\nNão foi possivel alocar\n";
      system ("pause");
      exit (1); 
   }
 
   novo->info=valor;
   novo->prox=NULL;
   
   if(!ptr)
      ptr=novo;

   else
   {
      aux=ptr;
      while(aux->prox)
      aux=aux->prox;
      aux->prox=novo;
   } 
   retur ptr;
}