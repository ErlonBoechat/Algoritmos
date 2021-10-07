void remove(int matric[], int m, int &t)
{
   int pos, x;
   
   pos=buscaSequencial(matric, m, t);
   
   if(pos==-1) // testando se a lista esta vazia
      cout<<"\nAtencao! Lista vazia\n";
   else if(pos==-2)
      cout<<"\nAtencao! Matricula nao encontrada\n";
   else
   {
      //desloca todos os elementos em lista, se necessário, deixando vazios ao final
      for(x=pos;x<t-1;x++)
         matric[x]=matric[x+1];
         t--; //atualiza o tamanho da lista
         cout<<"\nMatricula Removida\n";
   }
}