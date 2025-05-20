// this program will find the pair sum which is equal to the target
// sum using the vector and function.

#include<iostream>
#include<vector>

using namespace std;

// vector function implemented
vector<int> pair_sum(vector<int> vec, int target){
    vector<int> ans; // another vector to store the indexes
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i+1; j < vec.size(); j++)
        {
            if ((vec[i] + vec[j]) == target)
            {
                ans.push_back(i); // first index
                ans.push_back(j); // second index
                return ans;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> vec = {2,7,11,15};
    int target = 9;
    int size = vec.size();

    vector<int> ans = pair_sum(vec, target);

    if(ans.size() == 2){
        cout << "First index: " << ans[0] << endl;
        cout << "Second index: " << ans[1] << endl;
    }
    else{
        cout << "No pairs found!" << endl;
    }
    return 0;
}