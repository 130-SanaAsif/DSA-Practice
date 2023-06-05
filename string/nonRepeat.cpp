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
int NonRepeat(string s){
    char freq[256] = {0};
    int cnt = 0;
    for(int i=0; s[i] != '\0'; i++){
        freq[s[i]]++;
    }
    for(int i=0; i<256; i++){
        if(freq[i] == 1){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    string s = "alphaahdid";
    int res = nonRepeat(s);
    cout<<res<<endl;
    int res2 = NonRepeat(s);
    cout<<res2;
}