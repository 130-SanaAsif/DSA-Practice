#include<bits/stdc++.h>
using namespace std;

int operationBinaryString(string s){
    if(s.size() == 0){
        return -1;
    }
    int res;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'A'){
            res = (s[i-1]-'0') & (s[i+1]-'0');
        }
        else if(s[i] == 'B'){
            res = (s[i-1]-'0') | (s[i+1]-'0');
        }
        if(s[i] == 'C'){
            res = (s[i-1]-'0') ^ (s[i+1]-'0');
        }
    }
    return res;
}

int main(){
    string s = "0C1A1B1C1C1B0A0";
    int res = operationBinaryString(s);
    cout<<res<<endl;
    return 0;
}
