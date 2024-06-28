// A bit different method of using for loop from the typical one
// Another method of initialization of vector if we don't already know the size of vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4}; // Initializing our vector

    // We can use following loop condition if size is unknown
    for(int i:vec){ //integer i will automatically iterate through the vector
        cout <<i <<" ";
    }    
    return 0;
}
