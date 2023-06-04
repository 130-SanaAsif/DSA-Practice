#include<bits/stdc++.h>
using namespace std;

int nonRepeat(string s){
    unordered_map<char,int>mp;
    int cnt = 0;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }

    for(int i=0; i<s.size(); i++){
        if(mp[s[i]] == 1){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    string s = "alphaahdid";
    int res = nonRepeat(s);
    cout<<res;
}