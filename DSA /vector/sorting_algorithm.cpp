#include <iostream>
#include <vector>
#include <algorithm>  // Required for sorting

using namespace std;

int main(){
    vector<int> vec ={10,30,20,50,40};

    sort(vec.begin(), vec.end()); // Sort in ascending order

    for (int num : vec) {
        cout << num << " ";
    }
    return 0;
}