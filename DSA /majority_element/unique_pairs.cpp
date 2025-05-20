// this program will find all the unique pairs of the array
#include<iostream>

using namespace std;

int main() {
    int arr[] = {2,7,11,15};
    int size  = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size;j++)
        {
            cout << "("<< arr[i] << "," << arr[j] << ")" << " ";
        }
        cout << endl;
    }
    
    return 0;
}