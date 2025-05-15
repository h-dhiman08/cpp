#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int val: nums)
        {
            ans^= val;
        }
        return ans;
    }
};

int main(){
    Solution s1;
    vector<int> vec = {4,1,2,1,2};

    cout << s1.singleNumber(vec) << endl;
    return 0;
}