#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> vec = {2,7,11,15};
    vector<int> ans;

    int target = 9;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i+1; j < vec.size(); j++)
        {
            if ((vec[i]+vec[j])==target)
            {
                vec.push_back(i);
                vec.push_back(j);
            }
        }
    }
    
    cout << "Pair is: (" << vec[0] << "," << vec[1] << ")" << endl;
    return 0;
}