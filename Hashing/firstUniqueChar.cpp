#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s){
    if(s.size() == 0){
        return -1;
    }

    map<char,int>mp;
    int ans = -1;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }

    for(int i=0; i<s.size(); i++){
        if(mp[s[i]] > 1){
            continue;
        }
        else{
            return i;
        }
    }
    return ans;
}

int main(){
string s = "loveleetcode";

int ans = firstUniqChar(s);
cout<<ans<<endl;

return 0;
}