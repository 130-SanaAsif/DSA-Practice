#include<bits/stdc++.h>
using namespace std;

int maxDepth(string s){
    int maxi = 0;
    int cnt1= 0;
    
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            cnt1++;
        }
        else if(s[i] == ')'){
            maxi = max(maxi,cnt1);
            cnt1--;
        }
    }
    return maxi;
}
int main(){
    string s = "(1)+((2))+(((3)))";
    int res = maxDepth(s);
    cout<<res;
    return 0;
}