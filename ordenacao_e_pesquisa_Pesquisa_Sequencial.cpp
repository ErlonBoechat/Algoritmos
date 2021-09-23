#include<iostream>
#define tam 5
using namespace std;

int main()
{
  int L,op,matProcura,pos,achou,matric[]={2,4,5,6,13};
  float CR[]={8,9,7.8,6,10};

  do
  {
    system("cls");
    cout<<"\n1 - Lista";
    cout<<"\n2 - Procura";
    cout<<"\n3 - Sai";
    cout<<"\nOpcao: ";
    cin>>op;

    switch(op)
    {
      case 1: cout<<"\nMatriculas\n\n";
        for(L=0;L<tam;L++)
          cout<<"\n"<<L+1<<" - "<<matric[L];
      break;
      
      case 2: cout<<"\nQual matricula a ser procurada? ";    
      cin>>matProcura;
      achou=0;
        for(L=0;L<tam && achou==0;L++)
        {
          if(matProcura==matric[L])
          {
            achou=1; pos=L;
          }
        }
        if(achou==1)
          cout<<"\nCR: "<<CR[pos]<<endl;
        else
          cout<<"\nMatricula nao achada\n";  
       break;
        
       case 3: cout<<"\nFim\n";
       break;
       default: cout<<"\nOpcao invalida\n"; 
    }
  cout<<"\n\n";
  system:("pause");
  }while(op!=3);
}