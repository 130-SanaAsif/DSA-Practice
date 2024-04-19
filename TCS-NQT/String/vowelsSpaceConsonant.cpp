#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    int cntV = 0, cntC = 0, cntS = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            cntV++;
        }
        else if(s[i] == ' '){
            cntS++;
        }
        else{
            cntC++;
        }
    }

    cout<<"Vowels : "<<cntV<<endl;
    cout<<"Consonants : "<<cntC<<endl;
    cout<<"Spaces : "<<cntS<<endl;

return 0;
}