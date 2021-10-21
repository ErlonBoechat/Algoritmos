desenfileirar(fila);

void desenfileira(queue &fil)
{
   if(fil.inicio>fil.fim) //testando se a fila está vazia
      cout<<"\nAtencao. Fila Vazia\n";
   else
   {
      cout<<"\nValor removido: "<<fil.f[fil.inicio]; //exibe o valor removido
      fil.inicio++; //atualiza o inicio da fila  
   }
}
