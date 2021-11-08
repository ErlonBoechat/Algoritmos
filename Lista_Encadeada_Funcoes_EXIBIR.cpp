void exibe(nodo* lista)
{
   int c=1;
   cout<<"\n\nListando\n";

   while(lista)
   {
      cout<<"\nValor do "<<c<<"º numero: "<<lista->num;
      lista=lista->prox;
      c++;
   }
}