#include<bits/stdc++.h>
using namespace std;
bool isOperand(char c){
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
string makeGood(string s){
    stack<char>st;
    string ans = "";
    for(int i=0; i<s.size(); i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else{
            if(abs(s[i] - st.top()) == 32)
                st.pop();
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        ans = st.top()+ans;
        st.pop();
    }
    return ans;
}

int main(){
    string s = "Pp";
    string res = makeGood(s);
    if(res == ""){
        cout<<"empty";
    }
    cout<<res;
    return 0;
}