#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    long long ans = 1;
    while(n){
        ans = ans* (n%10);
        n = n/10;
    }

    cout<<ans<<"-> Price"<<endl;
return 0;
}