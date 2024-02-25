#include<bits/stdc++.h>
using namespace std;

//Time Complexity - O(log n).
//Space Complexity - O(1).
double myPow(double x, int n){
    double ans = 1.0;
    long long nn = n;
    if(nn < 0){
        nn = -1*nn;
    }

    while(nn != 0){
        if(nn%2 == 0){
            x = x*x;
            nn = nn/2;
        }
        else{
            ans = ans*x;
            nn = nn-1;
        }
    }

    if(n < 0){
        ans = (double)(1.0)/(double)(ans);
    }

    return ans;
}

int main(){

    double x = 2.000;
    long long n = 10;

    double res = myPow(x,n);
    cout<<res<<endl;

    // double ans = 1.0000;
    // for(int i=0; i<n; i++){
    //     ans = ans*x;
    // }

    // cout<<ans;
    
return 0;
}