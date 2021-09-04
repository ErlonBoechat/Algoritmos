#include<iostream>
#include<locale>
#include<cstring>
using namespace std;

int main()
{
    struct cad
    {
        char nomePaciente[25], classificacao[25],telefone[14];
        float altura, peso, imc;
          
    };

    cad paciente1,paciente2; 
        
        cout<<"\nNome do paciente nº1 "; cin.getline(paciente1.nomePaciente,25);
        cout<<"\nDigite peso, altura e IMC - pressionando ENTER após cada um: \n";
        cin>>paciente1.peso>>paciente1.altura>>paciente1.imc;
        cin.get();
        cout<<"\nDigite a classificação: "; cin.getline(paciente1.classificacao,25);
        cout<<"\nDigite o telefone: "; cin.getline(paciente1.telefone,25);        
 
        cout<<"\nNome do paciente nº2 "; cin.getline(paciente2.nomePaciente,25);
        cout<<"\nDigite peso, altura e IMC - pressionando ENTER após cada um: \n";
        cin>>paciente2.peso>>paciente2.altura>>paciente2.imc;
        cin.get();
        cout<<"\nDigite a classificação: "; cin.getline(paciente2.classificacao,25);
        cout<<"\nDigite o telefone: "; cin.getline(paciente2.telefone,25);        
 
    system("cls");
    cout<<"\n--------------------------------------------------------\n";
    cout<<"\nNome do 1º paciente: "<<paciente1.nomePaciente;
    cout<<"\nPeso\tAltura\tIMC\tClassificação";
    cout<<"\n"<<paciente1.peso<<"\t"<<paciente1.altura<<"\t"<<paciente1.imc<<"\t"<<paciente1.classificacao;
    cout<<"\n--------------------------------------------------------\n";
    cout<<"\nNome do 2º paciente: "<<paciente2.nomePaciente;
    cout<<"\nPeso\tAltura\tIMC\tClassificação";
    cout<<"\n"<<paciente2.peso<<"\t"<<paciente2.altura<<"\t"<<paciente2.imc<<"\t"<<paciente2.classificacao;
    cout<<"\n--------------------------------------------------------\n";

cout<<"\n\n";
system("pause");    

}
