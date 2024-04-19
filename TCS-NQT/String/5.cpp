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
    cout<<s<<endl;
return 0;
}