#include<iostream>
#include<locale>
#include<cctype>
#include<cstring>
using namespace std;

int main() {

struct cad
{
  char pal[21]={"Ceara"};
}palavra[2];

for(int x=0;x<2;x++)
{
for(int y=0;y<strlen(palavra[x].pal);y++)
cout<<"\n"<<palavra[x].pal[y];
cout<<"\n\n";
}

  return 0;
}