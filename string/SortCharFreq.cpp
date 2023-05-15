#include<bits/stdc++.h>
using namespace std;

string sortCharFreq(string s){
    unordered_map<char,char>mp;
    string res = "";
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }
    for(int i=0; i<s.size(); i++){
        if(mp.find(s[i]) == s[i]){
            res.push_back(s[i]);
        }
    }
    return res;
}

int main(){
    string s = "tree";
    string res = sortCharFreq(s);
    cout<<res<<endl;
    return 0;
}