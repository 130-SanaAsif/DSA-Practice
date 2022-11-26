//Level medium
#include<iostream>
#include<vector>
using namespace std;
int BuyStockSell(vector<int>& arr){
    int profit = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>arr[i-1]){
            profit += (arr[i]-arr[i-1]);
        }
    }
    return profit;
}
int main(){
    vector<int> arr = {7,1,5,3,6,4};
    int res = BuyStockSell(arr);
    cout<<res;
    return 0;
}