#include<bits/stdc++.h>
using namespace std;

int NonDuplicateIndex(string s){
    unordered_map<char, int>mpp;

    for(int i=1; i<=s.size(); i++){
        mpp[s[i]];
    }

    for(auto &it: mpp){
        if(it.second == 1){
            return ;
        }
    }
    return -1;
}

int main(){
    string s;
    getline(cin,s);

    int n = 0;
    for(int i=0; s[i] != '\0'; i++){
        n++;
    }

return 0;
}