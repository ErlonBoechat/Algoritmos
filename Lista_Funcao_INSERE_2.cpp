void insere(int matric[], int m, int &t, int tamanho)
{
   if(tamanho==t)
      cout<<"\nAtenção! Lista cheia\n";
   else
   {
      matric[t]=m;
      t++;
   }
}