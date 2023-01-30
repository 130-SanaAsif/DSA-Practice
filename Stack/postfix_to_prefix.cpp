#include<bits/stdc++.h>
using namespace std;

bool isOperand(char c){
    return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

string postfixToInfix(string s){
    stack<string>st;

    for(int i=0; s[i] != '\0'; i++){
        if(isOperand(s[i])){
            string op(1,s[i]);
            st.push(op);
        }
        else{
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            st.push("(" + op2 + s[i] + op1 + ")");
        }
    }
    return st.top();
}

int prec(char c){
    if(c == '^'){
        return 3;
    }
    else if(c == '/' || c == '*'){
        return 2;
    }
    else if(c == '+' || c == '-'){
        return 1;
    }
    else
        return -1;
}

string infixToPrefix(string s1){
    string s = postfixToInfix(s1);
    reverse(s.begin(), s.end());
    stack<char>st;
    string res;

    for(int i=0; i<s.length(); i++){
        char c = s[i];

        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
            res +=c;
        }
        else if(c == ')'){
            st.push(c);
        }
        else if(c == '('){
            while(!st.empty() && st.top() != ')'){
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && prec(c) <= prec(st.top())){
                res += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    string str = "ABC/-AK/L-*";
    string res = infixToPrefix(str);
    cout<<res;
    return 0;
}