#include<bits/stdc++.h>
using namespace std;

string sortCharFreq(string s){
    
    unordered_map<char,int>mp;
    priority_queue<pair<int,char>>pq;
    string ans = "";
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }
    for(auto it:mp){
        pq.push({it.second,it.first});
    }
    while(!pq.empty()){
        auto temp = pq.top();
        int freq = temp.first;
        char ch = temp.second;

        ans+=string(freq,ch);
        pq.pop();
    }
    return ans;
}

int main(){
    string s = "Aabb";
    string ans = sortCharFreq(s);
    cout<<ans;
    return 0;
}