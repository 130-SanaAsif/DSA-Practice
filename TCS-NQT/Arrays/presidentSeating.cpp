#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int fact = 1;
    for(int i=1; i<=n-1; i++){
        fact = fact*i;
    }

    int ans = 2*fact;
    cout<<ans<<"-> possible ways of seating the members"<<endl;
return 0;
}