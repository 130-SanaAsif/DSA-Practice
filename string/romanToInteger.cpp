#include<bits/stdc++.h>
using namespace std;

//Brute Force.
//TC - O(n).
//SC - O(1).
int roman(char c){
        if(c == 'I'){
            return 1;
        }
        else if(c == 'V'){
            return 5;
        }
        else if(c == 'X'){
            return 10;
        }
        else if(c == 'L'){
            return 50;
        }
        else if(c == 'C'){
            return 100;
        }
        else if(c == 'D'){
            return 500;
        }
        else if(c == 'M'){
            return 1000;
        }
        else{
            return -1;
        }
    }
    int romanToInt(string s) {
        int ans = 0;
        for(int i=0;i<s.size(); i++){
            int s1 = roman(s[i]);
            if(i+1 < s.size()){
                int s2 = roman(s[i+1]);
                if(s1 >= s2){
                    ans = ans+s1;
                }
                else{
                    ans = ans+s2-s1;
                    i++;
                }
            }
            else{
                ans = ans+s1;
            }
        }
        return ans;
    }

//Optimised Code.
//TC - O(n).
//SC - O(1).
int RomanToInteger(string s){
    int ans = 0;
    unordered_map<char,int>mp{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    for(int i=0; i<s.size(); i++){
        if(mp[s[i]] < mp[s[i+1]]){
            ans = ans+mp[s[i]];
        }
        else{
            ans = ans-mp[s[i]];
        }
    }
    return ans;
}
int main(){
    string s = "MCMXCIV";
    int res = romanToInt(s);
    cout<<res;
}