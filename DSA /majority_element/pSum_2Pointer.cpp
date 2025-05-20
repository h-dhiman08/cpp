// this program will find the pair sum which is equal to the target
// sum using the vector and function.

#include<iostream>
#include<vector>

using namespace std;

// vector function implemented
vector<int> pair_sum(vector<int> vec, int target){
    vector<int> ans; // another vector to store the indexes
    int i = 0;
    int j = vec.size() -1;

    while(i < j){
        int pair_sum = vec[i] + vec[j];
        if(pair_sum > target){
            j--;
        }
        else if(pair_sum < target){
            i ++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            i++;
            j--;
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