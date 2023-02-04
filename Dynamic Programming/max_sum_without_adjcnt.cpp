#include<bits/stdc++.h>
using namespace std;

int findMax(int *arr, int n){
    
    vector<int>dp(n,0);
    dp[0] = arr[0];
    dp[1] = max(arr[1],arr[0]);
    for(int i=2; i<n; i++){
        dp[i] = max(dp[i-1], arr[i] + dp[i-2]);
    }
    return dp[n-1];
}

int main(){
    int arr[] = {5,5,10,100,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = findMax(arr,n);
    cout<<res;
    return 0;
}