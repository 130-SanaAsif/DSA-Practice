#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    // unordered_map<char,int>mpp;
    // int hash[26] = {0};

    // for(int i=0; i<s.length(); i++){
    //     hash[s[i]-'a']++;
    // }

    sort(s.begin(), s.end());

    for(int i=0; i<s.size(); i++){
        cout<<s[i]<<" ";
    }
    

return 0;
}