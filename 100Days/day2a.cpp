#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        int a = r;
        int b = max(l,r/2+1);

        int ans = a % b;
        cout<<ans<<endl;
    }
return 0;
}