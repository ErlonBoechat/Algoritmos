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
