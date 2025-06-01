// implementing the kdane algorithm
#include<iostream>
#include<limits.h>

using namespace std;

int maxSub(const int *arr,const int &size){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0; i < size; i++){
        currSum += arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}
int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout <<maxSub(arr,size) << endl;
    return 0;
}