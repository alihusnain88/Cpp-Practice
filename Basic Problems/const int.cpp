// A very basic overview of keyword const, used with int...
// Value of a simple variable can be changed,
// but of a constant variable cannot be.

#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    cout << "The value of variable a is " << a << endl; // a = 5

    a = 7;                                     // I can change the value of a because a is varable (changeable )
    cout << "New value of a is " << a << endl; // a = 7

    const int A = 10;
    cout << "The value of A is " << A << endl; // A = 10

    // Now value of A cannot be changed because it is of const type
    // i.e. A = 20 (or some other value) is not possible
    // Even A = 10 is also not possible which is already its value    

    return 0;
}
