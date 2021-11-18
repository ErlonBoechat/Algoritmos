void exibe (nodo *ptr)
{
   cout<<"\nListando\n";

   while(ptr)
   {
      cout<<"\n"<<ptr->info;
      ptr=ptr->prox; 
   }
}