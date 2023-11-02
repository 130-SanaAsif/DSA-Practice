#include<bits/stdc++.h>
using namespace std;

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
    int n = -2;

    double res = myPow(x,n);
    cout<<res<<endl;
    
return 0;
}