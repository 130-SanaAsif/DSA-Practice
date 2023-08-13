#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

bool isAnagram(string s, string t){
    if(s.size() != t.size()){
        return false;
    }
    vector<int>freq(26,0);
    for(int i=0; i<s.size(); i++){
        freq[s[i]-'a']++;
    }
    for(int i=0; i<t.size(); i++){
        freq[t[i]-'a']--;
    }

    for(int i=0; i<freq.size(); i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
}

int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);
    cout<<"Given : "<<endl;
    cout<<s<<endl;
    cout<<t<<endl;
    if(isAnagram(s,t)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}