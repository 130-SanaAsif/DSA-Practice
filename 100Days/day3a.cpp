#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string n;
        cin>>n;
        int len = n.length()-1;
        if(n[len] == '0'){
            cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
return 0;
}