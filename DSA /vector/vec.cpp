#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v = {10, 20, 30, 40};

    // Access elements
    cout << v[1] << endl;  // Output: 10
    cout << v.at(1) << endl; // Output: 20 (Safer than `v[1]` as it checks bounds)

    
    return 0;
}