#include<bits/stdc++.h>
using namespace std;

//Using recursion.
int recur(int i, int j, vector<vector<int>>&arr){
    if(i == 0 && j == 0){
        return arr[0][0];
    }

    if(i < 0 || j < 0) return 1e9;
    
    int up = arr[i][j] + recur(i-1,j,arr);
    int left = arr[i][j] + recur(i,j-1,arr);

    return min(up,left);
}

//Using memoization.
int memo(int i, int j, vector<vector<int>>&arr, vector<vector<int>>&dp){
    if(i == 0 && j == 0){
        return arr[0][0];
    }

    if(i<0 || j<0){
        return 1e9;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int up = arr[i][j] + memo(i-1,j,arr,dp);
    int left = arr[i][j] + memo(i,j-1,arr,dp);

    return dp[i][j] = min(up,left);
}

//Using tabulation.
int pathSum(int n, int m, vector<vector<int>>&arr, vector<vector<int>>&dp){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i == 0 && j == 0){
                dp[i][j] = arr[0][0];
            }
            else{
                int up = arr[i][j];
                int left = arr[i][j];

                if(i>0){
                    up += dp[i-1][j];
                }
                else{
                    up += 1e9;
                }

                if(j>0){
                    left += dp[i][j-1];
                }
                else{
                    left += 1e9;
                }

                dp[i][j] = min(up,left);
            }
        }
    }
    return dp[n-1][m-1];
}

//Using space optimization.
int minPathSum(int n, int m, vector<vector<int>>&arr){
    vector<int>prev(m,0);

    for(int i=0; i<n; i++){
        vector<int>cur(m,0);
        for(int j=0; j<m; j++){
            if(i == 0 && j == 0){
                cur[j] = arr[0][0];
            }
            else{
                int up = arr[i][j];
                int left = arr[i][j];
                
                if(i>0){
                    up += prev[j];
                }
                else{
                    up += 1e9;
                }

                if(j>0){
                    left += cur[j-1];
                }
                else{
                    left += 1e9;
                }

                cur[j] = min(up,left);
            }
        }
        prev = cur;
    }
    return prev[m-1];
}
int main(){
    vector<vector<int>>arr = {{10,8,2},
                            {10,5,100},
                            {1,1,2}};
    int n = arr.size();
    int m = arr[0].size();
    vector<vector<int>>dp(n,vector<int>(m,-1));

    cout<<"Using Recursion = ";
    int res1 = recur(n-1,m-1,arr);
    cout<<res1<<endl;

    cout<<"Uisng Memoization = ";
    int res2 = memo(n-1,m-1,arr,dp);
    cout<<res2<<endl;

    cout<<"Using Tabulation = ";
    int res3 = pathSum(n,m,arr,dp);
    cout<<res3<<endl;

    cout<<"Uisng Space Optimization = ";
    int res4 = minPathSum(n,m,arr);
    cout<<res4<<endl;
return 0;
}