#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int ans = 1;
    for(int i=0; i<str.size(); i++){
        if(str[i] == 'A'){
            ans = ans + (str[i-1] & str[i+1])-'0';
        }
        else if(str[i] == 'B'){
            ans = ans + (str[i-1] | str[i+1])-'0';
        }
        else if(str[i] == 'C'){
             ans = ans + (str[i-1] ^ str[i+1])-'0';
        }
    }

    cout<<ans;
return 0;
}