// Using tolower function to convert capital letters to lower ones

#include <iostream>
using namespace std;

int main()
{
    char ch = 65; //Setting a variable to ASCII of 'A'

    for(int i=1; i<=25; i++){
        cout << char(tolower(ch)) <<" ";
        ch++;
    }   

    return 0;
}
