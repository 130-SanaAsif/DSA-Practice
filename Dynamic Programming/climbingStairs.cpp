#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

//code fro recursion.
int recur(int n){
    if(n < 0){
        return 0;
    }
    if(n == 0 || n == 1){
        return 1;
    }

    return (recur(n-1) + recur(n-2))%mod;
}

//code for memoization.
int memo(int n, vector<int>&dp){
    if(n == 0 || n == 1){
        return 1;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    return dp[n] = (memo(n-1, dp) + memo(n-2, dp)) % mod;

}

//code for tabulation.
int climbStair(int n, vector<int>&dp){
    if(n == 0 || n == 1){
        return 1;
    }

    dp[0] = 1;
    dp[1] = 1;
    for(int i=2; i<=n; i++){
        dp[i] = (dp[i-1] + dp[i-2])%mod;
    }

    return dp[n];
}

//code for space optimization.
int climbStair2(int n){
    if(n == 0 || n == 1){
        return 1;
    }

    int a = 1, b = 1, c;
    for(int i=2; i<= n; i++){
        c = (a+b)%mod;
        a = b;
        b = c;
    }

    return c;
}

int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    vector<int>dp(n+1, -1);
    int sol1 = recur(n);
    cout<<"Using Recursion = "<<sol1<<endl;

    int sol2 = memo(n,dp);
    cout<<"Using Memoization = "<<sol2<<endl;

    int sol3 = climbStair(n, dp);
    cout<<"Using Tabulation = "<<sol3<<endl;

    int sol4 = climbStair2(n);
    cout<<"Using Space Optimization = "<<sol4<<endl;
    
return 0;
}