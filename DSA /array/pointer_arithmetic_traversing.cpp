// this program demonstrates how to traverse an array using pointer arithmetic in C++.
#include<iostream>

using namespace std;

void traverse(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << *(arr + i) << " "; // Using pointer arithmetic to access elements
    }
    cout << endl;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    traverse(arr,size);
    return 0;
}