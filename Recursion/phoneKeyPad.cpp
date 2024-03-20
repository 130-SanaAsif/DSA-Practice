#include<bits/stdc++.h>
using namespace std;

void solve(int ind, vector<string>&ans, string ds, string s, string map[]){
    if(ind >= s.length()){
        ans.push_back(ds);
        return;
    }

    int val = s[ind]-'0';
    string temp = map[val];

    for(int i=0; i<temp.length(); i++){
        ds.push_back(temp[i]);
        solve(ind+1,ans,ds,s,map);
        ds.pop_back();
    }
}

vector<string>phoneKeypad(string s){
    vector<string>ans;
    string ds;
    string map[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(0,ans,ds,s,map);
    return ans;
}

int main(){
    string s = "23";
    vector<string>ans = phoneKeypad(s);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
return 0;
}