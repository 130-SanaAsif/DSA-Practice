#include<bits/stdc++.h>
using namespace std;

int minOperation(int a, int b){
    if(a == b){
        return 0;
    }
    if((a&b) == a || (a&b) == b){
        return 1;
    }
    return 2;
}

int main(){
    int a = 5, b = 12;
    int res = minOperation(a,b);
    cout<<res;
    return 0;
}