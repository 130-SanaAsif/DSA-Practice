#include<bits/stdc++.h>
using namespace std;

bool isOperand(char c){
    return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

string prefixToInfix(string s){
    stack<string>st;  
    
    for(int i = s.length()-1; i>=0; i--){
        if(isOperand(s[i])){
            string op(1,s[i]);
            st.push(op);
        }
        else{
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            st.push('(' + op1+ s[i] + op2 +')');
        }
    }
    return st.top();
}

int main(){
    string str = "*-A/BC-/AKL";
    string res = prefixToInfix(str);
    cout<<res; 
    return 0;
}