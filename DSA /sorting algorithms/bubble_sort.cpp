#include<iostream>

using namespace std;

void display(const int* arr, const int &size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {5,4,1,3,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Before sorting," << endl;
    display(arr,size);

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size-i; j++)
        {
            int temp = arr[i];
            if (arr[j] < arr[i])
            {
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout << "\nAfter sorting," << endl;
    display(arr,size);
    cout << endl;
    return 0;
}