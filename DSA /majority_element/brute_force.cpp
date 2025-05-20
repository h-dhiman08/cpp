// this program demonstrate on how to find the majority element in the given array
// using brute force technique

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    vector<int> vec = {7,2,4,6,4,3};
    int m = 0;
    int count = 0;
    int check = INT_MIN;
    int num INT_MIN;

    for (int i = 0; i < vec.size(); i++)
    {
        check = vec[i];
        for (int j = i+1; j < vec.size(); j++)
        {
            if (vec[j] == check)
            {
                count++;
            }
            if (count >= m)
            {
                num = vec[i];
            }
        }
    }
    

    cout << num << endl;
    return 0;
}