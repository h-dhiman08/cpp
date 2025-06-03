// leet code problem number: 01 Two Sum
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {2,7,11,15};
    int target = 9;
    int size = sizeof(arr)/sizeof(arr[0]);

    int a,b;
    vector<int> vec;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]+arr[j]==target){
                vec.push_back(i);
                vec.push_back(j);
            }
        }
        
    }
    
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    return 0;
}