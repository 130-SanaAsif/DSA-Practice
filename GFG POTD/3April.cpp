//Remainder on dividing by 11
//Statement - Given a big positive number x represented as string,
//find value of x % 11 or x mod 11. Output is expected as an integer.
//Example-
/*
Input: x = 231456786543567898765
Output: 1
Explanation: 231456786543567898765 % 11 = 1
*/
#include<bits/stdc++.h>
using namespace std;

//My Approach.
//int xmodd(string s){
//    long long num = 0;
//    for(int i=0; i<s.length();i++){
//        num = (num*10+s[i]-'0')%11;
//    }
//    return num;
//}

//Another Approach.
int xmodd(string s){
    int ans=0;
    bool flag = true;
    for(int i=s.length();i>=0; i--){
        int num = s[i]-'0';
        if(flag) ans = (ans+num)%11;
        else ans = (ans+num*10)%11;
        flag != flag;
    }
    return ans;
}
int main(){
    string s = "231456786543567898765";
    int res = xmodd(s);
    cout<<res;
}

//TC - O(Length of string).
//SC - O(1).