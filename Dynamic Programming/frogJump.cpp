#include<bits/stdc++.h>
using namespace std;

//Using recursion.
int recur(int n, vector<int>arr){
    if(n == 0) return 0;

    int left = recur(n-1, arr) + abs(arr[n] - arr[n-1]);
    int right = INT_MAX;
    if(n > 1){
        right = recur(n-2, arr) + abs(arr[n] - arr[n-2]);
    }

    return min(left, right);
}

//Using Memoization.
int memo(int n, vector<int>arr, vector<int>&dp){
    if(n == 0){
        return 0;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    int left = memo(n-1,arr,dp) + abs(arr[n] - arr[n-1]);
    int right = INT_MAX;
    if(n > 1){
        right = memo(n-2, arr, dp) + abs(arr[n] - arr[n-2]);
    }

    return dp[n] = min(left, right);
}

//Using Tabulation.

int tabulation(int n, vector<int>&arr, vector<int>&dp){
    dp[0] = 0;

    for(int i=1; i<n; i++){
        int left = dp[i-1] + abs(arr[i] - arr[i-1]);
        int right = INT_MAX;
        if(i > 1){
            right = dp[i-2] + abs(arr[i] - arr[i-2]);
        }
        dp[i] = min(left, right);
    }
    return dp[n];
}

//Using space optimization.

int frogJump(int n, vector<int>&arr){
    if(n == 0) return 0;
    int prev = 0;
    int prev2 = 0;
    for(int i=1; i<n; i++){
        int left = prev + abs(arr[i] - arr[i-1]);
        int right = INT_MAX;
        if(i > 1){
            right = prev2 + abs(arr[i] - arr[i-2]);
        }

        int cur = min(left, right);
        prev2 = prev;
        prev = cur;
    }
    return prev;
}

int main(){
    vector<int>arr = {30,10,60,10,60,50};
    int n = arr.size();
    vector<int>dp(n, -1);
    
    int ans1 = recur(n-1,arr);
    cout<<"Using Recursion = "<<ans1<<endl;

    int ans2 = memo(n-1,arr,dp);
    cout<<"Using Memoization = "<<ans2<<endl;

    int ans3 = tabulation(n-1,arr,dp);
    cout<<"Using Tabulation = "<<ans3<<endl;

    int ans4 = frogJump(n, arr);
    cout<<"Using space optimization = "<<ans4<<endl;

return 0;
}