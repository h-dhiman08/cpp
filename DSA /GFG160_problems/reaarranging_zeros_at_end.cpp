#include<iostream>
#include<vector>

using namespace std;

void pushZerosToEnd(vector<int> &arr){
        int count = 0;
        // adding the non-zero elements
        for(int i = 0 ; i < arr.size(); i++){
            if(arr[i] != 0){
                arr[count] = arr[i];
                count ++;
            }
        }
        
        // inserting the remaining zeroes
        int zeroes = arr.size() - count;
        for(int i = 0; i < zeroes; i++){
            arr[arr.size()-i-1] = 0;
        }
    }

using namespace std;

int main() {
    vector<int> vec = {3,5,0,0,4};
    pushZerosToEnd(vec);

    for(int val: vec){
        cout << val << " ";
    }
    return 0;
}