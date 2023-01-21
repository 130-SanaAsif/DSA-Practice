#include<bits/stdc++.h>
using namespace std;

int minVal(int a, int b){
    int seta = __builtin_popcount(a);
    int setb = __builtin_popcount(b);
    int ans = 0;
    for(int i=0; i<=31; i++){
        int mask = 1 << i;
        int set = a & mask;
        if(set ==0 && setb>seta){
            ans |= (mask);
            setb--;
        }
        else if(set && seta>setb)
            seta--;
        else
            ans |= set;
    }
    return ans;
}

int main(){
    int a = 7, b = 12;
    int res = minVal(a,b);
    cout<<res;
    return 0;
}