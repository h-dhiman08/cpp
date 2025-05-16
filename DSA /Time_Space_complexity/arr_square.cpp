// this program has the auxiliary space complexity
#include<iostream>
using namespace std;

void square(int arr[], int size){
    int brr[size];
    for (int i = 0; i < size; i++)
    {
        brr[i] = arr[i] * arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << brr[i] << " ";
    }
    
    return;
}

int main(){
    int arr[5] = {1,2,3,4,5};

    square(arr, 5);

    cout << endl;

    return 0;
}