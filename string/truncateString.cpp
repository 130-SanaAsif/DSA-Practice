#include<bits/stdc++.h>
using namespace std;

string truncateString(string s, int k){
    if(k == 0){
        return s;
    }
    string res = "";
    for(int i=0; i<s.size(); i++){
        if(k > 0 && s[i] != ' '){
            res.push_back(s[i]);
            continue;
        }
        k--;
        if(k > 0){
            res.push_back(' ');
        }
    }
    return res;
}

int main(){
    string s;
    getline(cin,s);
    int k;
    cin>>k;
    cout<<"Given : "<<endl;
    cout<<s<<endl;
    cout<<k<<endl;

    string res = truncateString(s,k);
    cout<<res;

    return 0;
}