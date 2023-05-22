#include<bits/stdc++.h>
using namespace std;

string outerParenthesis(string s){
    string res;
    int cnt = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            cnt++;
        }
        else{
            cnt--;
        }
        if((s[i] == '(' && cnt == 1) || (s[i] == ')' && cnt == 0)){
            continue;
        }
        res.push_back(s[i]);

    }
    return res;
}

int main(){
    string s = "(()())(())";
    string res = outerParenthesis(s);
    cout<<res;
    return 0;
}