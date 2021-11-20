nodo *insereFim(nodo *flista, int valor)
{
   nodo *novo, *aux;
   novo=new nodo;
   
   if(!novo)
   {
       cout<<"\nNão foi possivel alocar";
       system("pause");
       exit (1);   
   }
   
   novo->info=valor;
   novo->prox=NULL;
   
   if(flista==NULL)
   {
       flista=novo;  
   } 
    
   else
   {  aux=flista;  
     
      while(aux->prox)
      {
          aux=aux->prox;
      }
      aux->prox=novo;
   {
}