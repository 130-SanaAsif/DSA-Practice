#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            s = s.substr(0,i) + s.substr(i+1);
            i--;
        }
    }

    // int cnt = 0;
    // for(int i=0; s[i]; i++){
    //     if(s[i] != ' '){
    //         s[cnt] = s[i];
    //         cnt++;
    //     }
    // }
    // s[cnt] = '\0';

    cout<<s<<endl;
return 0;
}