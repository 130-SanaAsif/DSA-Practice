#include<bits/stdc++.h>
using namespace std;

//Brute Force.
//TC - O(nlogn).
//SC - O(1).
bool validAnagram(string s, string t){
    if(s.size() != t.size()){
        return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s == t){
        return true;
    }
    return false;
}

//Optimised Approach.
//TC - O(N).
//SC - O(1).
bool ValidAnagram(string s, string t){
    if(s.size() != t.size()){
        return false;
    }
    vector<int>freq(26,0);
    for(int i=0; i<s.size(); i++){
        freq[s[i] -'a']++;
        freq[t[i] -'a']--;
    }
    for(int i=0; i<freq.size(); i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
}
int main(){
    string s = {"anagram"};
    string t = {"rnagaam"};
  
    bool res = ValidAnagram(s,t);
    if(res == 1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}