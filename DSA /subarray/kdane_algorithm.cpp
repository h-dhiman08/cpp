#include<iostream>
#include<climits>

using namespace std;

int main(){
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int maxSum = INT_MIN;
    int currSum = 0;

    // using Kdane Algorithm,
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        currSum += arr[i];

        maxSum = max(currSum , maxSum);

        if(currSum < 0){
            currSum = 0;
        }
    }
    
    cout << "Maximum subarray sum is: " << maxSum << endl;
    return 0;
}