#include<bits/stdc++.h>
using namespace std;

int maxNumberWord(vector<string>& s){
    int ans = 0;
    for(int i=0; i<s.size(); i++){
        string t = s[i];
        int j = 0;
        int cnt = 1; //Kyun ki sentence khatam hone ke baad bhi ek space hai isliye.

        while(j < t.size()){
            if(t[j] == ' '){
                cnt++;
                j++;
            }
            j++;
        }

        ans = max(ans,cnt);
    }
    return ans;
}

int main(){
    vector<string> s = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    int res = maxNumberWord(s);

    cout<<"The maximum number of word is : "<<res<<endl;
}