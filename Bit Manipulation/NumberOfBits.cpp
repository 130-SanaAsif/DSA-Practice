#include<bits/stdc++.h>
using namespace std;

int hammingWeight(uint64_t n){
    int cnt=0;
    while(n!=0){
        //checking last bit.
        if(n&1){
            cnt++;
        }
        n = n>>1;
    }
    return cnt;
}
int main(){
    uint64_t n = 00000000000000000000000010000000;
    int res = hammingWeight(n);
    cout<<res<<endl;
    return 0;
}