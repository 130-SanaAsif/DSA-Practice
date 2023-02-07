#include<bits/stdc++.h>
using namespace std;

void permuteString(string s, int l, int r){
    if(l == r){
        cout<<s<<endl;
    }
    for(int i = l; i <= r; i++){
        swap(s[l],s[i]);
        permuteString(s, l+1, r);
        swap(s[l], s[i]);
    }
}

int main(){
    string str = "abc";
    int n = str.size();

    permuteString(str, 0, n-1);
    return 0;
}