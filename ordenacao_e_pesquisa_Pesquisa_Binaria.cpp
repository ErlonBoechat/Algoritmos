#include<iostream>
#define tam 10
using namespace std;

int main()
{
  int op,L,inicio,fim,meio,procura,matric[]={2,4,5,6,13,15,18,23,29,30};
  float CR[]={8,9,7.8,6,10,9,9,9.7,9,9};
  
  do
  {
    system("cls");
    cout<<"\nMatriculas\n\n";
    
    for(L=0;L<tam;L++)
   
      cout<<"\n"<<L+1<<" - "<<matric[L];
      cout<<"\n\n1- Procura";
      cout<<"\n2- Sai";
      cout<<"\nOpçao: ";
      cin>>op;
    
    if(op==1)
    {
      cout<<"\nDigite a matricula: ";
      cin>>procura;
      inicio=0;
      fim=tam-1;
      meio=(inicio+fim)/2;
      cout<<"\n"<<inicio<<"\t"<<meio<<"\t"<<fim;
      
      while(procura!=matric[meio]&&inicio!=fim)
      {
        if(procura>matric[meio])
          inicio=meio+1;
        else
          fim=meio;
          meio=(inicio+fim)/2;
          cout<<"\n"<<inicio<<"\t"<<meio<<"\t"<<fim;  
      }
      
      if(matric[meio]==procura)
        cout<<"\nCR: "<<CR[meio]<<endl;
      else  
        cout<<"\nMatricula nao encontrada\n";
    }
    else if(op==2)
      cout<<"\nFim";
    else
      cout<<"\nOpção invalida\n";
      cout<<"\n\n";
      system("pause");
      
  }while(op!=2);
}