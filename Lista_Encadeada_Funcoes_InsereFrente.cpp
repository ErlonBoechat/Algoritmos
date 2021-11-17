nodo* insereFrente(nodo *ptr, int valor)
{
   nodo *temp=new nodo

   if(!temp)
   {
      cout<<"\nNao foi possivel alocar\n";
      system("pause");
      exit(1);
   }
   
   temp->info=valor;
   temp->prox=ptr;
   return temp;
}