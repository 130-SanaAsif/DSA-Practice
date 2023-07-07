#include<bits/stdc++.h>
using namespace std;


//Approach 1.

int ComplementBase(int n){
    int ans = 1;
    while(ans < n){
        ans = ans << 1; 
        ans++;
    }
    return ans^n;
}


//Approach 2.

int Complement10Base(int n){
    //Edge Case.
    
    if(n == 0){
        return 1;
    }

    int m = n;
    int mask = 0;
    while(m != 0){
        mask = (mask<<1) | 1;
        m = m>>1;
    }
    int ans = (~n) & mask;
    return ans;
}

int main(){
   int n = 10;
    int ans = ComplementBase(n);
    cout<<ans;
}