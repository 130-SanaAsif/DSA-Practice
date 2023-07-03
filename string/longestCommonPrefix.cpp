#include<bits/stdc++.h>
using namespace std;


string LongestCommon(vector<string>& s){
    string res = "";
    sort(s.begin(), s.end());
    string first = s[0], last = s[s.size()-1];
    for(int i=0; i<min(first.size(), last.size()); i++){
        if(first[i] != last[i])
            return res;
        res+=first[i];
    }
    return res;
}

int main(){
    vector<string>s = {"boat", "bare", "bone"};
    string res = LongestCommon(s);
    cout<<res;
    return 0;
}