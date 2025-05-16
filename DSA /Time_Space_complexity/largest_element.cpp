// this program clears the concept of the complexity of finding the largest 
// elementt in the sorted vector / array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec = {2,4,1,5,3};
    cout << "Size of vec: " << vec.size() << endl;
    sort(vec.begin(), vec.end());

    for(int i: vec){
        cout << i << " ";
    }   

    cout << endl;

    // we will find the complexity of given code block
    for (int i = 0; i < 2; i++)
    {
        cout << vec[i] << " ";
    }
    // it will be of constant time complexity. (This particular code block)
    return 0;
}