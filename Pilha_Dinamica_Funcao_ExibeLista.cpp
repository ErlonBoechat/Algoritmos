void exibeLista(nodo *plista)
{
   cout<<"\nListando";
   
   while(plista)
   cout<<"\n"<<plista->info;
   plista=plista-prox;      
}