#include <iostream>
using namespace std;
int main()
{
    char x;
    while(x=!0)
    {
    cout<<"\nWrite a character: ";
    cin>>x;
    cout << "\nThe ASCII value of the character "<< x <<" is: " << int(x);
    cout<<"\n----------------------------------------------";
    
    }
    return 0;
}