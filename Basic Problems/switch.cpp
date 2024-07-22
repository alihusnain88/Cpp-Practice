// Using switch case

#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "Enter score : ";
    cin >>score;

    switch(score){

        case 50:
        {cout <<"Fifty"<<endl;
        break;}

        case 100:
        {cout << "Century"<<endl;
        break;}

        default:
        {cout <<"Neither a fifty, nor a century "<<endl;}

    }
    return 0;
}
