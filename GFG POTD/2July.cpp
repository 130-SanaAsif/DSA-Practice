#include<bits/stdc++.h>
using namespace std;

int CopyBits(int x, int y, int l, int r){
    --l;
    --r;
    for(int i=l; i<r+1; i++){
        int bit = (y >> i) & 1;
        x |= bit << i;
    }
    return x;
}

int main(){
    int x,y,l,r;
    x = 44;
    y = 3;
    l = 1; 
    r = 5;
    int res = CopyBits(x,y,l,r);
    cout<<res<<endl;
    return 0;
}