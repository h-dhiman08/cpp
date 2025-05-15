#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
    void reverse(vector<int> &vec);
    void printVector(const vector<int> &vec);
};
void Solution::reverse(vector<int> &vec){
    for (int i = 0; i < vec.size()/2; i++)
    {
        int temp = vec[i];
        vec[i] = vec[vec.size()-i -1];
        vec[vec.size()-i -1] = temp;
    }
}
void Solution::printVector(const vector<int> &vec){
    for (int val : vec)
    {
        cout << val << " ";
    }
    
}
int main(){
    Solution s1;

    vector<int> vec = {3,2,5,1};

    cout << "Original Vector: ";
    s1.printVector(vec);

    cout << endl << "After reversing,\nNew Vector is: ";
    s1.reverse(vec);
    s1.printVector(vec);
    
    cout << endl;
    return 0;
}