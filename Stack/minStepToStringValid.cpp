#include<bits/stdc++.h>
using namespace std;

int findMinimumCost(string s){
    if(s.size()%2 == 1){
        return -1;
    }

    stack<char>st;

    for(int i=0; i<s.size(); i++){
        if(s[i] == '{'){
            st.push(s[i]);
        }
        else{
            if(!st.empty() && st.top() == '{'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
    }

    int a = 0, b = 0;
    while(!st.empty()){
        if(st.top() == '{'){
            a++;
        }
        else{
            b++;
        }
        st.pop();
    }

    int ans = (a+1)/2 + (b+1)/2;
    return ans;
}

int main(){
    string s = "{{{{";
    int ans = findMinimumCost(s);
    cout<<ans;

    return 0;
}