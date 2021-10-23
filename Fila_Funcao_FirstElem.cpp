elemPrimeiro(fila);

void elemPrimeiro(queue &fil)
{
   if(fil.inicio>fil.fim)
      cout<<"\nAtenção. Fila vazia\n";
   else
      cout<<"Elemento do inicio da fila: "<<fil.f[fil.inicio];
}