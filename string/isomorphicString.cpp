#include<bits/stdc++.h>
using namespace std;

bool IsomorphicString(string s, string t){
    unordered_map<char,char>mp, mp2;
    for(int i=0; i<s.size(); i++){
        if(mp[s[i]] && mp[s[i]] != t[i]) return false;
        if(mp2[t[i]] && mp2[t[i]] != s[i]) return false;
        mp[s[i]] = t[i];
        mp2[t[i]] = s[i];
    }
    return true;
}

int main(){
    string s = "ehg";
    string t = "el";
    bool res = IsomorphicString(s,t);
    if(res == true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}