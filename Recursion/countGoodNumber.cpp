#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007;
            // 1000000007

long long myPow(long long x, long long n){
    if(n == 0){
        return 1;
    }

    long long ans = myPow(x,n/2);

    ans = ans * ans;
    ans = ans % mod;

    if(n%2 == 1){
        ans = ans * x;
        ans = ans % mod;
    }

    return ans;
}

int goodNumber(long long n){
    long long odd = n/2;
    long long even = n/2 + n%2;
    return (myPow(5,even) * myPow(4,odd))%mod;
}

int main(){
    long long n = 4;
    int res = goodNumber(n);
    cout<<"The count of good number in "<<n<<" is = "<<res<<endl;
return 0;
}