// leet code problem number: 01 Two Sum
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int size = nums.size();
    int target = 9;

    vector<int> vec;
    sort(nums.begin(), nums.end());

    int i = 0, j = size - 1;
    while (i <= j)
    {
        if (nums[i] + nums[j] == target)
        {
            vec.push_back(i);
            vec.push_back(j);
            break;
        }
        else if (nums[i] + nums[j] > target)
        {
            j--;
        }
        else if (nums[i] + nums[j] < target)
        {
            i++;
        }
        else
        {
            i++;
            j--;
        }
    }
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    return 0;
}