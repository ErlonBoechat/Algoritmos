void substituiNo(nodo ptr*, int posicao, int novoValor)
{
   int conta=1;
   
   while(conta!=posicao)
   {
      ptr=ptr->prox;
      conta++;
   }
   ptr->info=novoValor;
}