#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int search(vector<int> &vec, int search){
        for (int i = 0; i < vec.size(); i++)
        {
            if (search == vec[i])
            {
                return i;
            }
        }
    }
};

int main(){
    Solution s1;
    vector<int> vec = {4,1,2,1,2};

    int search;

    cout << "enter which element to search: ";
    cin >> search;

    cout << "element is at " << s1.search(vec, search) << " index" << endl;
    return 0;
}