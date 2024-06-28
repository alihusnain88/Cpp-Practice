// Finding sum of array elements by Recursion
#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> v, int size); // Function prototype

int main(){     // Main begins execution 
    vector<int> vec; // Declaring a vector named 'vec'
    int input; // For user input
    cout <<"Enter array elements : (-1 to end)"; // User will enter -1 to stop entering input

    while(input != -1){
        cin >>input;
        vec.push_back(input);
    } // Keep taking inputs and pushing them back into vector, until entered -1 by user


    int size = vec.size();
    cout <<"Sum is "<< sum(vec,size);
    return 0;
}

int sum(vector<int> v, int size){
    static int index = size-1; // First copy the size (static int ----> because we don't want to initialize it every time)
    index -= 1; // Infact we want to decrease it by 1 every time, until it reaches 0th index

    // Base case
    if(index == 0){
        return v[0];
    }    
    return v[n] + sum(v, size); // Add current element to the imcomplete sum returned by the sum function 
    // v[n] ----> present element
    // sum (v, size) ----> sum of all previous elements
} 
