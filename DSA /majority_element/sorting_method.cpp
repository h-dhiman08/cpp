/*
=========== Author: Harsh Dhiman ============

This program will demonstrate on how to calculate the majority element 
in the given array/vector using sorting technique*/

#include<iostream>
#include<vector> // for Vector implementation
#include<climits> // for INT_MIN
#include<algorithm> // for srot() function
using namespace std;

int main(){
    // given array / vector
    vector<int> vec = {3,2,3};
    int size = vec.size(); // can use size() function also

    // sorting the vector
    sort(vec.begin(), vec.end());

    // implementing the core technique
    int num = vec[0];
    int freq = 0;
    int ans  = INT_MIN;
    for(int i = 0; i < size; i++){
        // if same number occurs
        if(num == vec[i]){
            freq ++; // frequency is updated
            if(freq > (size/2)){ // as per question
                ans = vec[i]; // answer updated
            }
        }

        else if(num != vec[i]){
            freq = 0;
            num = vec[i];
        }
    }
    cout << "Majority Element is: " << ans << endl;
    return 0;
}