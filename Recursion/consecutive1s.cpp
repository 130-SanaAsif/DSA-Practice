#include<bits/stdc++.h>
using namespace std;

void helper(vector<string>&a, string s, int n){
    if(s.size() == n){
        a.push_back(s);
    }

    if(s[s.size()-1] == '1'){
        helper(a, s+"0", n);
    }
    else{
        helper(a, s+"0", n);
        helper(a, s+"1", n);
    }
}

vector<string>generateString(int n){
    vector<string>ans;
    if(n == 0){
        return ans;
    }

    string a = "1";
    string b = "0";

    helper(ans, b, n);
    helper(ans, a, n);

    return ans;
}
int main(){
    int n = 3;
    vector<string>ans = generateString(n);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
return 0;
}