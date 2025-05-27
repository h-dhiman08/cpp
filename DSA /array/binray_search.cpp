#include<iostream>

using namespace std;

int binSearch(int arr[], int size, int key){
    int st = 0, end = size-1;
    while (st <= end)
    {
        int mid = (st + end)/2;
        if (arr[mid] == key) // key found
        {
            return mid;
        }
        else if (arr[mid] > key) // first half
        {
            end = mid -1;
        }
        else if (arr[mid] < key) // second half
        {
            st = mid +1;
        }
    }
    return -1;
}

int main() {
    int arr[]= {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 4;
    cout << binSearch(arr, size, key) << endl;
    return 0;
}