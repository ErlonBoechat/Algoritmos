#include<iostream>
using namespace std;
struct data
{
  int dia, mes, ano;
};

int main ()
{
  struct pagto
  {
    int codigo;
    float valor;
    data venc;
  }promissorias[2];
     
  int x;
    cout<<"\n===============================";
  for(x=0;x<2;x++)
  {
    cout<<"\nCodigo da promissoria: ";
    cin>>promissorias[x].codigo;
   
    cout<<"\nValor a ser pago: ";
    cin>>promissorias[x].valor;
    cout<<"\n...............................\n";
    cout<<"\nDigite dia: ";
    cin>>promissorias[x].venc.dia;

    cout<<"\nDigite mes: ";
    cin>>promissorias[x].venc.mes;

    cout<<"\nDigite ano: ";
    cin>>promissorias[x].venc.ano;
    cout<<"\n==============================="; 
  } 
  
  cout<<"\nCodigo\t|Valor\t|Data de vencimento\n";
  
  for(x=0;x<2;x++)
  cout<<"\n  "<<promissorias[x].codigo<<"\t | R$"<<promissorias[x].valor<<"\t | "<<promissorias[x].venc.dia<<"/"<<promissorias[x].venc.mes<<"/"<<promissorias[x].venc.ano;
  cout<<"\n\n"; 
}
