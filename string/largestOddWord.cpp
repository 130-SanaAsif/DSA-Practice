#include<bits/stdc++.h>
using namespace std;

string largestOddNumber(string s){
    for(int i= s.size()-1; i>=0; i--){
        if(s[i] % 2 == 0) s.pop_back();
        else break;
    }
    return s;
}

int main(){
    string s = "7896";
    string res = largestOddNumber(s);
    cout<<res;
    return 0;
}