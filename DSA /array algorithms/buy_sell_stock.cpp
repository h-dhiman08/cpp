#include<iostream>
#include<limits.h>
using namespace std;

void maxProfit(const int *prices,const int &size){
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;

    // calculating the best buying Day for each selling day
    for (int i = 1; i < size; i++)
    {
        bestBuy[i] = min(bestBuy[i-1],prices[i-1]);
    }

    // calculating the best profit
    int maxProfit = 0; // required in case of decreasing graph
    for (int i = 0; i < size; i++)
    {
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }

    cout << "Maximum possible profit: " << maxProfit << endl;
}
int main(){
    int prices[] = {7,1,5,3,6,4};
    int size = sizeof(prices)/sizeof(prices[0]);

    maxProfit(prices,size);
    return 0;
}