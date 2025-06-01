#include<iostream>

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    // travelling the array's subarrays
    for (int st = 0; st < size; st++)
    {
        for (int end = st; end < size; end++)
        { 
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            
            cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}