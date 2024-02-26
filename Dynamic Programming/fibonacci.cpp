#include<bits/stdc++.h>
using namespace std;

//This is the code for memoization.
int fib(int n, vector<int>&dp){
    if(n <= 1){
        return n;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    return dp[n] = fib(n-1, dp) + fib(n-2, dp);
}

//Code for Tabulation.
int fib1(int n, vector<int>&dp){
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

//Code for Space Optimization.
int fib2(int n){
    int a = 0, b = 1, c;
    
    for(int i=2; i<=n; i++){
        c = a+b;
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
    cout<<"Memoization Technique = "<<fib(n, dp)<<endl;
    cout<<"Tabulation Technique = "<<fib1(n,dp)<<endl;
    cout<<"Space Optimization Technique = "<<fib2(n)<<endl;

return 0;
}