#include<bits/stdc++.h>
using namespace std;

//Using Recursion.
int solve1(int n, int k, vector<int>&arr){
    if(n == 0){
        return 0;
    }

    int minstep = INT_MAX;
    for(int i=1; i<=k; i++){
        if(n-i >= 0){
            int jump = solve1(n-i,k,arr) + abs(arr[n] - arr[n-i]);
            minstep = min(minstep, jump);
        }
    }

    return minstep;
}

//Using Memoization.

int solve2(int n, int k, vector<int>&arr, vector<int>&dp){
    if(n == 0) return 0;
    if(dp[n] != -1){
        return dp[n];
    }

    int minstep = INT_MAX;
    for(int j=1; j<=k; j++){
        if(n-j >= 0){
            int jump = solve2(n-j,k,arr,dp) + abs(arr[n] - arr[n-j]);
            minstep = min(minstep,jump);
        }
    }
    return dp[n] = minstep;
}

//Uisng Tabulation.

int minCost(int n, int k, vector<int>&arr, vector<int>&dp){
    dp[0] = 0;
    
    for(int i=1; i<n; i++){
        int minstep = INT_MAX;
        for(int j=1; j<=k; j++){
            if(i-j >= 0){
                int jump = dp[i-j] + abs(arr[i] - arr[i-j]);
                minstep = min(minstep, jump);
            }
        }
        dp[i] = minstep;
    }
    return dp[n-1];
}

int main(){
    vector<int>arr = {10,40,50,20,60};
    int n = arr.size();
    int k = 3;
    vector<int>dp(n,-1);

    int ans1 = solve1(n-1,k,arr);
    cout<<"Using Recursion = "<<ans1<<endl;

    int ans2 = solve2(n-1,k,arr,dp);
    cout<<"Using Memoization = "<<ans2<<endl;

    int ans3 = minCost(n,k,arr,dp);
    cout<<"Using Tabulation = "<<ans3<<endl;

return 0;
}