#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach using stack.
//Time Complexity - O(n).
//Space Complxity - O(n).
string reverseWord(string s){
    stack<char>st;
    reverse(s.begin(), s.end());
    string res = "";
    for(int i=0; i<s.size(); i++){
           st.push(s[i]);
        if(s[i] == ' ' && !st.empty()){
            while(!st.empty()){
                if(st.top() == ' ')
                    st.pop();
                res.push_back(st.top());
                st.pop();
            }
            res.push_back(' ');
        }
    }
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    return res;
}

//Optimised Approach.
//Time Complexity - O(n).
//Space Complexity - O(1).

string revWord(string s){
    reverse(s.begin(), s.end());
    int left = 0, right = 0, itrt=0;
    int n = s.size();
    while(itrt < n){
        while(itrt < n && s[itrt] != ' ')
            s[right++] = s[itrt++];
        if(left < right){
            reverse(s.begin() + left, s.begin()+right);
            if(right == n) break;
            s[right++] = ' ';
            left = right; 
        }
        itrt++;
    }
    if(right > 0 && s[right-1] == ' ') s.resize(right-1);
    else s.resize(right);
    return s;
}
int main(){
    string s = "i like this program very much";
    string res = revWord(s);
    cout<<res;
    return 0;
}