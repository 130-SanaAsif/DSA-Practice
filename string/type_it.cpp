#include<bits/stdc++.h>
using namespace std;

int minOperation(string s){
    int cnt = 0;
    int n = s.length() - 1;
    bool apend = false;
    while(n >= 0){
                    int cur = n+1;
            if(!apend && cur%2 == 0 && s.substr(0,cur/2) == s.substr(cur/2,cur/2)){
                n -= (cur/2);
                apend = true;
            }
            else{
                n--;
            }
            cnt++;
        }
        return cnt;
}

int main(){
    string str = "abcdefgh";
    int res = minOperation(str);
    cout<<res;
    return 0;
}