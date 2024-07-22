// setw(int) is used to format our output 
// by adding extra spaces before the text 
// or numbers like, when printing the output in tabular form


#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
   int a = 2, b = 123, c = 1122;

   cout << "The value of a without setw is "<<a <<endl;
   cout << "The value of b without setw is "<<b <<endl;
   cout << "The value of c without setw is "<<c <<endl;

   cout <<endl;  
   cout << "The value of a with setw is "<<setw (4) <<a <<endl; // '   2'
   cout << "The value of b with setw is "<<setw (4) <<b <<endl; // ' 123'
   cout << "The value of c with setw is "<<setw (4) <<c <<endl; // '1122'

    return 0;
}

