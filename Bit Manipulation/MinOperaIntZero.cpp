#include<bits/stdc++.h>
using namespace std;

int countbit(long long num){
    int cnt = 0;
    while(num > 0){
        cnt += num&1;
        num>>=1;
    }
    return cnt;
}

int MiniOperation(int num1, int num2){
    if(num1 < num2){
        return -1;
    }

    for(int steps = 0; steps<=60; steps++){
        long long diff = num1 - 1LL*(num2)*steps;
        int bits = countbit(diff);
        if(bits <= steps && steps <= diff){
            return steps;
        }
    }
    return -1;
}

int main(){
    int num1 = 5, num2 = 7;
    int res = MiniOperation(num1,num2);
    cout<<res;
    return 0;
}