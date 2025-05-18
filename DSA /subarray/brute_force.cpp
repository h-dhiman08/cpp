#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int maxSum = INT_MIN;

    for (int st = 0; st < size; st++)
    {
        int currentSum = 0;
        for (int end = st; end < size; end++)
        {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }   
    
    cout << "Maximum sum is: " << maxSum << endl;
    return 0;
}