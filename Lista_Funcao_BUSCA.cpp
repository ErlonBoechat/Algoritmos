int buscaSequencial(int matric[], int m, int t)
{
   int x;
   
   if(t==0)
   return-1; //testa lista vazia
   
   for(x=0;x<t;x++)
   
   if(matric[x]==m)
   return x; //retorna o deslocamento do endereco base
   return -2; //percorreu toda a lista e nao achou
}