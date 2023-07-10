#include<bits/stdc++.h>
using namespace std;

string timeConversion(string s){
    string res = "";
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'P' && s[i+1] == 'M'){
            s.pop_back();
            s.pop_back();
            return s;
        }
        else{
            if(if)
        }
    }
    return res;
}

int main(){
    string s = "12:01:00 PM";
    string res = timeConversion(s);
    cout<<res<<endl;
    return 0;
}