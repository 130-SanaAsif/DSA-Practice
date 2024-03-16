#include<bits/stdc++.h>
using namespace std;

//Using Recursion.
int f(int i, int j){
    if(i == 0 && j == 0){
        return 1;
    }
    if(i < 0 || j < 0){
        return 0;
    }

    int up = f(i-1, j);
    int left = f(i,j-1);

    return up + left;
}

//Using memoization.
int f(int i, int j, vector<vector<int>>&dp){
    if(i == 0 && j == 0){
        return 1;
    }
    if(i<0 || j<0){
        return 0;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int up = f(i-1,j,dp);
    int left = f(i,j-1,dp);

    return dp[i][j] = up+left;
}
int memo(int n, int m){
    vector<vector<int>>dp(n,vector<int>(m,-1));
    return f(n-1, m-1, dp);
}

//Using Tabulation.
int unique(int n, int m){
    int dp[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i == 0 && j == 0){
                dp[i][j] = 1;
            }
            else{
                int up = 0;
                int left = 0;

                if(i > 0){
                    up = dp[i-1][j];
                }
                if(j > 0){
                    left = dp[i][j-1];
                }
                dp[i][j] = up+left;
            }
        }
    }
    return dp[n-1][m-1];
}

//Using Space Optimization.
int uniquePath(int n, int m){
    vector<int>prev(m,0);
    for(int i=0; i<n; i++){
        vector<int>temp(m,0);
        for(int j=0; j<m; j++){
            if(i == 0 && j == 0){
                temp[j] = 1;
                continue;
            }
            else{
                int up = 0, left = 0;
                if(i > 0) up = prev[j];
                if(j > 0) left = temp[j-1];
                temp[j] = up + left;
            }
        }
        prev = temp;
    }
    return prev[m-1];
}

int main(){
    int n = 3, m = 7;

    cout<<"Using Recursion = ";
    int res1 = f(n-1,m-1);
    cout<<res1<<endl;

    cout<<"Using Memoization = ";
    int res2 = memo(n,m);
    cout<<res2<<endl;

    cout<<"Using Tabulation = ";
    int res3 = unique(n,m);
    cout<<res3<<endl;

    cout<<"Using Space Optimization = ";
    int res4 = uniquePath(n,m);
    cout<<res4<<endl;

return 0;
}