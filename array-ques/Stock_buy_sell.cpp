#include<iostream>
#include<vector>
using namespace std;

int MaxProfit(vector<int>&prices){
    int n = prices.size();
    int max = INT_MAX;
    int sell = 0;
    for(int i=0; i<n; i++){
        if(prices[i] < max){
            max = prices[i];
        }
        int profit = prices[i] - max;
        if(sell < profit){
            sell = profit;
        }
    }
    return sell;
}

int main(){
    vector<int>prices ={7,1,5,3,6,4};
    int res = MaxProfit(prices);
    cout<<"The maximum profit we will get, if we buy on day "<<res<<"."<<endl;
    return 0;
}