#include<bits/stdc++.h>
using namespace std;

int permutationString(string s){
    if(s.size() == 0){
        return 1;
    }
    int len =s.size();
    int fact = 1;
    for(int i=1; i<=len; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    string s;
    cin>>s;
    cout<<"Given : "<<s<<endl;
    int res = permutationString(s);
    cout<<res;

    return 0;
}