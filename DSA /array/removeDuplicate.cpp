// leetcode problem 26
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int size = nums.size(); // stores the vector size

        vector<int> records; // unique element vector
        int previous = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[previous] != nums[i])
            {
                records.push_back(1);
                previous++;
            }
            else
            {

                previous++;
            }
        }
        return records.size()+1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 1, 2};

    cout << s.removeDuplicates(nums) << endl;
    return 0;
}