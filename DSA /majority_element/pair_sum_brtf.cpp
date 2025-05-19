#include<iostream>
#include<vector>
using namespace std;


int main() {
    int arr[] = {2,7,11,15};    
    int size = sizeof(arr)/sizeof(arr[0]);

    int target = 9;
    vector<int> vec;

    // implementing the brute force technique
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if((arr[i] + arr[j]) == target){
                vec.push_back(i); // first number index
                vec.push_back(j); // second number index
            }
        }
    }
    

    cout << "First index: " << vec[0] << endl;
    cout << "Second index: " << vec[1] << endl;
    return 0;
}