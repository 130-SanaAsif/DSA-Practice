#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n == 1 || n == 0){
        cout<<n;
    }

    if(n % 2 == 0){
        int ans = n*2;
        cout<<ans;
    }
    else{
        int ans = (n*2)-1;
        cout<<ans;
    }


return 0;
}