#include<bits/stdc++.h>
using namespace std;

int f(int n, vector<int>&arr, vector<int>&dp){
    // dp[0] = 0;
    // for(int i=1; i<=n; i++){
    //     int pick = arr[i];
    //     if(i>1){
    //         pick = arr[i] +dp[i-2];
    //     }
    //     int notPick = 0 + dp[i-1];
    //     dp[i] = max(pick, notPick);
    // }
    // return dp[n-1];

    if(n == 0){
        return arr[n];
    }

    if(n < 0) return 0;
    if(dp[n] != -1){
        return dp[n];
    }

    int pick = arr[n] + f(n-2,arr,dp);
    int notPick = 0 + f(n-1,arr,dp);
    return dp[n] = max(pick,notPick);
}

int tabulation(vector<int>&arr){
    int n = arr.size();
    vector<int>dp(n,-1);
    int ans = f(n-1,arr,dp);
    return ans;
}

int houseRobber(vector<int>&arr){
    int n = arr.size();
    if(n == 1){
        return arr[0];
    }

    vector<int>temp1;
    vector<int>temp2;

    for(int i=1; i<n; i++){
        temp1.push_back(arr[i]);
    }

    for(int i=0; i<n-1; i++){
        temp2.push_back(arr[i]);
    }

    int ans1 = tabulation(temp1);
    int ans2 = tabulation(temp2);

    return max(ans1,ans2);
}

int main(){
    vector<int>arr = {1,2,3};
    int n = arr.size();
   
    int ans = houseRobber(arr);
    cout<<ans<<endl;
return 0;
}