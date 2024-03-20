#include<bits/stdc++.h>
using namespace std;

//Using recursion.
int recur(int i, int j, int n, vector<vector<int>>&arr){
    if(i == n-1){
        return arr[n-1][j];
    }

    int down = arr[i][j] + recur(i+1,j,n,arr);
    int diag = arr[i][j] + recur(i+1,j+1,n,arr);

    return min(down,diag);
}

//Using memoization.

int solve(int i, int j, int n, vector<vector<int>>&arr, vector<vector<int>>&dp){
    if(i == n-1){
        return arr[n-1][j];
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int down = arr[i][j] + solve(i+1,j,n,arr,dp);
    int diag = arr[i][j] + solve(i+1,j+1,n,arr,dp);

    return dp[i][j] = min(down,diag);
}
int memo(vector<vector<int>>&arr, int n){
    vector<vector<int>>dp(n,vector<int>(n,-1));
    return solve(0,0,n,arr,dp);
}

//using tabulation.
int minimumTotal(vector<vector<int>>&arr, int n){
    vector<vector<int>>dp(n,vector<int>(n,0));

    for(int j=0; j<n; j++){
        dp[n-1][j] = arr[n-1][j];
    }

    for(int i=n-2; i>=0; i--){
        for(int j=i; j>=0; j--){
            int down = arr[i][j] + dp[i+1][j];
            int diag = arr[i][j] + dp[i+1][j+1];
            dp[i][j] = min(down,diag);
        }
    }
    return dp[0][0];
}

//using space optimization.
int minTriangle(vector<vector<int>>&arr, int n){
    vector<int>front(n,0), cur(n,0);

    for(int j=0; j<n; j++){
        front[j] = arr[n-1][j];
    }

    for(int i=n-2; i>=0; i--){
        for(int j=i; j>=0; j--){
            int down = arr[i][j] + front[j];
            int diag = arr[i][j] + front[j+1];
            cur[j] = min(down,diag);
        }
        front = cur;
    }
    return front[0];
}

int main(){
    vector<vector<int>>arr = {{2},{3,4},{6,5,7},{4,1,8,3}};
    int n = arr.size();
    
    cout<<"Using Recursion = ";
    int res1 = recur(0,0,n,arr);
    cout<<res1<<endl;

    cout<<"Using Memoization = ";
    int res2 = memo(arr,n);
    cout<<res2<<endl;

    cout<<"Using Tabulation = ";
    int res3 = minimumTotal(arr,n);
    cout<<res3<<endl;

    cout<<"Using Space Optimization = ";
    int res4 = minTriangle(arr,n);
    cout<<res4<<endl;
return 0;
}