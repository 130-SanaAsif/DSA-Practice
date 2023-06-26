#include<bits/stdc++.h>
using namespace std;

int RevInt(int n){
    int r = 0;
    while(n != 0){
        if(r > INT_MAX/10 || r < INT_MIN/10) return 0;
        r = r*10 + n%10;
        n = n/10;
    }
    return int(r);
}

int main(){
    int n = -321;
    int res = RevInt(n);
    cout<<res;
    return 0;
}