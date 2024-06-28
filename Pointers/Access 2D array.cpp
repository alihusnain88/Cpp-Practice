// A very basic and simple program to access a two dimensional (2D) array using pointers.

#include <iostream>
using namespace std;
# define rows 3
# define cols 3

int main(){
    int matrix[rows][cols] = {{1,2,3}, {4,5,6}, {7,8,9}}; // Initializing a 2D array
    int *ptr; 

    ptr = &matrix[0][0]; // Giving address of first element to pointer
    cout <<"Element [0][0] = "<<*ptr<<endl; // Printing the value pointer is pointing to

    ptr++; // Pointer moves from element "1" to element "2"
    cout<<"Element [0][1] = "<<*ptr<<endl;  // Printing the value pointer is pointing to

    ptr = &array[1][0]; // Directing the pointer to first element of 2nd row
    cout <<"Element [1][0] = "<<*ptr<<endl;  // Printing the value pointer is pointing to

    ptr = &array[2][2]; // Directing the pointer to last element of last row
    cout <<"Element [2][2] = "<<*ptr<<endl;  // Printing the value pointer is pointing to
    
    return 0;
}
