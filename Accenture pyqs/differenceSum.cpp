#include<bits/stdc++.h>
using namespace std;

int differneceSum(int m, int n){
    int divSum = 0;
    int noDivSum = 0;
    for(int i=1; i<=n; ++i){
        if(i%m == 0){
            divSum = divSum+i;
        }
        else{
            noDivSum = noDivSum+i;
        }
    }
    int ans = noDivSum-divSum;
    return ans;
}

int main(){
    int n, m;
    cin>>m;
    cin>>n;
    cout<<"Given : "<<"m = "<<m<<", n = "<<n<<endl;
    int res = differneceSum(m,n);
    cout<<res<<endl;

    return 0;
}