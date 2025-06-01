// this code is part of a C++ project that demonstrates the use of the `new` keyword for dynamic memory allocation.
#include<iostream>
using namespace std;

int main(){
    int* ptr = new int(5); // Dynamically allocate an integer and initialize it to 5
    cout << "Value of ptr: " << *ptr << endl; // Output the value pointed to by ptr
    return 0;
}