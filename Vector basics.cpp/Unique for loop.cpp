// A bit different form of for loop from normal one
// Another method of initialization of vector if we don't know the size of vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4}; // Initializing our vector

    // We can use following loop condition is size is unknown
    for(int i:vec){ // i will automatically iterate through our vector 
        cout <<i <<" ";
    }    
    return 0;
}
