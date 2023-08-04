#include<bits/stdc++.h>
using namespace std;

int adamCharity(int n){
    int ans = 0;
    while(n != 0){
        int coin = pow(n,2);
        ans = ans+coin;
        n--;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<"Input"<<endl;
    cout<<n<<endl;
    int res = adamCharity(n);
    cout<<res;
    return 0;
}