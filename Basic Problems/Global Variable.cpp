// Accessing a global variable

#include <iostream>
using namespace std;
int a = 50;

int main()
{
    int a = 1;

    cout << "The value of local a : " <<a <<endl;
    cout << "The value of global a :" <<:: a <<endl; //Scope resolution operator is used for accessing a global variable
  
    return 0;
}
