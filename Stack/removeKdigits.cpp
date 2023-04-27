#include<bits/stdc++.h>
using namespace std;

string removeKDigits(string num, int k){
    if(num.length() <= k)
        return "0";
    if(k==0)
        return num;
    string res = "";
    stack<char>s;
    if(num[0] != '0')
        s.push(num[0]);
    for(int i=1; i<num.length(); i++){
        while(k>0 && !s.empty() && s.top() > num[i]){
            --k;
            s.pop();
        }
        s.push(num[i]);
        if(s.size()==1 && num[i] == '0'){
            s.pop();
        }
    }

    while(k && !s.empty()){
        --k;
        s.pop();
    }

    while(!s.empty()){
        res.push_back(s.top());
        s.pop();
    }
    reverse(res.begin(),res.end());
    if(res.length() == 0){
        return "0";
    }
    return res;
}

int main(){
    string s;
    cout<<"Enter the string : "<<endl;
    cin>>s;
    int k;
    cout<<"Enter the value of k : "<<endl;
    cin>>k;
    string res = removeKDigits(s,k);
    cout<<res;
    return 0;
}