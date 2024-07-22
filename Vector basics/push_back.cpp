// vectorName.push_back() adds an element at the end of the vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec;

    vec.push_back(2);
    cout <<vec[0]<<endl; // Will give 2

    vec.push_back(4);
    cout <<vec[1]<<endl; // Will give 4

    vec.push_back(6);
    cout <<vec[2]<<endl; // Will give 6

    vec.push_back(8);
    cout <<vec[3]<<endl; // Will give 8

    return 0;
}
