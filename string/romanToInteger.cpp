#include<bits/stdc++.h>
using namespace std;

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
        int sum = 0;
        int val;
        for(int i=0;i<s.size(); i++){
            val = roman(s[i]);
            if(s[i] == val){
                sum += val;
            }
        }
        return val;
    }

int main(){
    string s = "III";
    int res = romanToInt(s);
    cout<<res;
}