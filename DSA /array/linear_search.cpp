#include<iostream>
using namespace std;

int find(int arr[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }  
    }
    
    return -1;
}
int main() {
    int arr[] = {2,4,6,8,10,12,14,16};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 10;

    cout << find(arr, size, target) << endl;
    return 0;
}