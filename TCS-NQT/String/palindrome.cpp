#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i, string &s){
    if(i >= s.length()/2) return true;
    
    if(s[i] != s[s.length()-i-1]) return false;

    return palindrome(i+1,s);
}

int main(){
    string s;
    getline(cin,s);

    int hi = s.size()-1;
    int lo = 0;
    bool flag = true;
    while(lo <= hi){
        if(s[hi] != s[lo]){
            flag = false;
        }
        lo++;
        hi--;
    }
    if(palindrome(0,s)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
return 0;
}