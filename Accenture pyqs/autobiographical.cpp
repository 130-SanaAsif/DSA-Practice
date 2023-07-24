#include<bits/stdc++.h>
using namespace std;

int autobiographicString(string s){
    int sum = 0;
    set<char>st;

    for(int i=0; i<s.size(); i++){
        sum += (s[i] -'0');
        st.insert(s[i]);
    }
    if(sum != s.size()){
        return 0;
    }
    return st.size();
}

int main(){
    // string n = "6210001000";
    string n = "1210";
    int res = autobiographicString(n);
    cout<<res<<endl;
    return 0;
}