enfileira(fila);

void enfileira(queue &fil)
{
   float valor;
  
   if(fil.fil==TAM-1) //testando se a fila está cheia 
      cout<<"\nAtencao! Fila Cheia\n";
   else
   {
      cout<<"\nDigite o valor a ser enfileirado: ";
      cin>>valor;
      fil.fim++;  // atualiza o final da fila
      fil.f[fil.fim]=valor //guarda o valor no final da fila
   }
}