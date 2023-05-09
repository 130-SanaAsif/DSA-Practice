#include<bits/stdc++.h>
using namespace std;

string outerParenthesis(string s){
    string res;
    int cnt = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            cout<<i<<" "<<"1st condition"<<endl;;
            cnt++;
            cout<<cnt<<" "<<endl;
        }
        else{
            cout<<i<<" second condition"<<endl;
            cnt--;
            cout<<cnt<<" "<<endl;
        }
        if((s[i] == '(' && cnt == 1) || (s[i] == ')' && cnt == 0)){
            cout<<i<<" 3rd condition"<<endl;
            cout<<cnt<<" "<<endl;
            continue;
        }
        res.push_back(s[i]);
        cout<<"pushed "<<endl;
    }
    return res;
}

int main(){
    string s = "(()())(())";
    string res = outerParenthesis(s);
    cout<<res;
    return 0;
}