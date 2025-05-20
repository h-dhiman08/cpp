#include<iostream>

using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    // reversing the array
    for(int i = 0; i < size; i++){
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
    
    int c1 = 0;
    int c2 = size-d-1;
    // reversing the specific indexes
    for (int i = c1, j = c2; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int val: arr){
        cout << val << " ";
    }
    return 0;
}