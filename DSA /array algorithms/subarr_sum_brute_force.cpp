#include<iostream>
#include<limits.h>
using namespace std;

void maxSub(int *arr, int size){
    int maxSum = INT_MIN;
    for(int st = 0; st < size; st++){
        for(int end = st; end < size; end++){
            int currSum = 0;
            for(int i = st; i <= end; i++){
                currSum += arr[i];
            }
            cout << currSum << ",";
            maxSum = max(maxSum, currSum);
        }
        cout <<  endl;
    }
    cout << "Maximum Subarray sum is: " << maxSum << endl;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    maxSub(arr,size);
    return 0;
}