#include<bits/stdc++.h>
using namespace std;

//Using Recursion.
int f(int ind, vector<int>&arr){
    if(ind == 0){
        return arr[ind];
    }

    if(ind < 0){
        return 0;
    }

    int pick = arr[ind] + f(ind - 2, arr);
    int notPick = 0 + f(ind-1, arr);

    return max(pick, notPick);
}

int recur(vector<int>&nums){
    return f(nums.size()-1, nums);
}

//Using Memoization.
int f(int ind, vector<int>&nums, vector<int>&dp){
    if(ind == 0){
        return nums[ind];
    }
    if(ind < 0) return 0;
    if(dp[ind] != -1) return dp[ind];

    int pick = nums[ind] + f(ind-2, nums, dp);
    int notPick = 0 + f(ind-1, nums, dp);

    return dp[ind] = max(pick, notPick);
}
int memo(vector<int>&nums){
    int n = nums.size();
    vector<int>dp(n, -1);

    return f(n-1, nums, dp);
}


//Using Tabulation.
int func(int n, vector<int>&nums, vector<int>&dp){
    dp[0] = nums[0];
    
    for(int i=1; i<n; i++){
        int pick = nums[i];
        if( i > 1 ){
            pick += dp[i-2];
        }
        int notPick = dp[i-1];
        dp[i] = max(pick, notPick);
    }
    return dp[n-1];
}
int tabulation(vector<int>&nums){
    int n = nums.size();
    vector<int>dp(n,-1);
    return func(n,nums,dp);
}

//Using Space Optimization.
int houseRobber(vector<int>&nums){
    int n = nums.size();
    int prev = nums[0];
    int prev2 = 0;

    for(int i=1; i<n; i++){
        int pick = nums[i];
        if(i > 1){
            pick += prev2;
        }
        int notPick = 0 + prev;
        int curi = max(pick,notPick);
        prev2 = prev;
        prev = curi;
    }
    return prev;
}

int main(){
     vector<int>nums = {1,3,5,7,8,6};//{1,2,3,1};

    int res1 = recur(nums);
    cout<<"Using Recursion = "<<res1<<endl;

    int res2 = memo(nums);
    cout<<"Using Memoization = "<<res2<<endl;

    int res3 = tabulation(nums);
    cout<<"Using Tabulation = "<<res3<<endl;

    int res4 = houseRobber(nums);
    cout<<"Using Space Optimization = "<<res3<<endl;

return 0;
}