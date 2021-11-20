nodo* insereFrente(nodo *plista, int valor)
{
   nodo *temp=new nodo;
   
   if(!temp)
   {
      cout<<"\nNao foi possivel alocar";
      system("pause");
      exit (1);
   }
   
   temp->info=valor;
   temp->prox=plista;
   return temp;
}