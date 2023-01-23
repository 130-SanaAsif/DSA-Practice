#include<bits/stdc++.h>
using namespace std;

string removePair(string s){
    stack<int>st;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty() || s[i]!=st.top()) st.push(s[i]);
            else st.pop();
        }
        if(st.size()==0) return "-1";
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
}

int main(){
    string str = "aaabbaaccd";
    string res = removePair(str);
    cout<<res;
    return 0;
}