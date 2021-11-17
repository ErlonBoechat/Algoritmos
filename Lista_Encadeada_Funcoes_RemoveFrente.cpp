nodo *removeFrente(nodo *ptr)
{
  nodo *aux;
  aux=ptr;
  ptr=ptr->prox;
  delete aux;
  return ptr;
}