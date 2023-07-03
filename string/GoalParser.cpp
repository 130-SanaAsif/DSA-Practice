#include<bits/stdc++.h>
using namespace std;

string goalParser(string s){
    string res;

    for(int i=0; i<s.size(); i++){
        if(s[i] == 'G'){
            res.push_back('G');
        }
        else if(s[i] == '(' && s[i+1] == ')'){
            res.push_back('o');
        }
        else if(s[i] == '(' && s[i+1] == 'a' && s[i+2] == 'l' && s[i+3] == ')'){
            res.push_back('a');
            res.push_back('l');
        }
    }
    return res;
}

int main(){
    string s = "G()(al)";
    string res = goalParser(s);
    cout<<res;
    return 0;
}