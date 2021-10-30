#include<iostream>
using namespace std;

int main()
{
   int ano=1989, *ptrAno;
   ptrAno=&ano; //o endereço da variavel 'ano' é atribuido ao ponteiro ptrAno
   cout<<"\nConteudo da variavel ano: "<<ano;
   cout<<"\nEndereco da variavel ano: "<<&ano;
   cout<<"\nconteudo da variavel ptrAno: "<<ptrAno;
   cout<<"\nConteudo do endereco apontado pela variavel ptrAno: "<<*ptrAno;
   cout<<"\n\n";
   system("pause");
}

}

//Consideracoes sobre o codigo:

//Foram declaradas duas variáveis do tipo inteira. 
//A variável foi inicalizada com valor 1989.

//A variável ptrAno é uma variável ponteiro porque tem um asterisco na frente do nome. 
//Ela apontará para uma variável que armazena um valor inteiro.

//A variável ponteiro foi inicializada. Usa-se o comando de atribuição e se precede 
//com & o nome da variável que será apontada por ela
