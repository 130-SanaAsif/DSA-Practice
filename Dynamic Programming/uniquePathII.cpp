#include<bits/stdc++.h>
using namespace std;

//Using recursion
int recur(int n, int m, vector<vector<int>>&arr){
    if(n >=0 && m >=0 && arr[n][m] == 1) return 0;
    if(n == 0 && m == 0) return 1;
    if(n < 0 || m < 0) return 0;

    int up = recur(n-1,m,arr);
    int left = recur(n,m-1,arr);
    return up + left;
}

//Using memoization.
int f(int i, int j, vector<vector<int>>&arr, vector<vector<int>>&dp){
    if(i >= 0 && j >= 0 && arr[i][j] == 1) return 0;
    if(i == 0 && j == 0) return 1;
    if(i < 0 || j < 0) return 0;

    if(dp[i][j] != -1) return dp[i][j];

    int up = f(i-1,j,arr,dp);
    int left = f(i,j-1,arr,dp);

    return dp[i][j] = up+left;
}

int memo(int i, int j, vector<vector<int>>&arr){
    vector<vector<int>>dp(i, vector<int>(j,-1));
    return f(i-1,j-1,arr,dp);
}

//Using Tabulation.
int unique(int n, int m, vector<vector<int>>&arr){
    int dp[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 1){
                dp[i][j] = 0;
            }
            else if(i == 0 && j == 0){
                dp[i][j] = 1;
            }
            else{
                int up = 0, left = 0;
                if(i > 0) up = dp[i-1][j];
                if(j > 0) left = dp[i][j-1];
                dp[i][j] = up+left;
            }
        }
    }
    return dp[n-1][m-1];
}

//Using Space Optimization.
int uniquePathII(int n, int m, vector<vector<int>>&arr){
    vector<int>prev(m,0);
    for(int i=0; i<n; i++){
        vector<int>temp(m,0);
        for(int j=0; j<m; j++){
            if(arr[i][j] == 1){
                temp[j] = 0;
            }
            else if(i == 0 && j == 0){
                temp[j] = 1;
            }
            else{
                int up=0, left=0;
                if(i>0) up = prev[j];
                if(j>0) left = temp[j-1];
                temp[j] = up+left;
            }
        }
        prev = temp;
    }
    return prev[m-1];
}
int main(){
    vector<vector<int>>arr = {{0,0,0},
                            {0,1,0},
                            {0,0,0}};

    int n = arr.size();
    int m = arr[0].size();

    cout<<"Using Recursion = ";
    int res1 = recur(n-1,m-1,arr);
    cout<<res1<<endl;

    cout<<"Using Memoization = ";
    int res2 = memo(n,m,arr);
    cout<<res2<<endl;

    cout<<"Using Tabulation = ";
    int res3 = unique(n,m,arr);
    cout<<res3<<endl;

    cout<<"Using Space Optimization = ";
    int res4 = uniquePathII(n,m,arr);
    cout<<res4<<endl;

return 0;
}