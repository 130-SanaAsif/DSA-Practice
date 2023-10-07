#include<bits/stdc++.h>
using namespace std;


bool redundantBracket(string &s){
    stack<char>st;

    for(int i=0; i<s.size(); i++){
        if(s[i] = '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            st.push(s[i]);
        }
        else{
            bool flag = true;

            if(s[i] == ')'){
                while(st.top() != '('){
                    char topp = st.top();
                    if(topp == '+' || topp == '-' || topp == '*' || topp == '/'){
                        flag = false;
                    }
                    st.pop();
                }
                if(flag){
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}

int main(){
    string s = "(a+b)";

    if(!redundantBracket(s)){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }

    return 0;
}