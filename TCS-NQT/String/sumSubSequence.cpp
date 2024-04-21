#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    long long sum = 0;

    for(int i=0; i<s.size(); i++){
        for(int j=i; j<s.size(); j++){
            string temp = s.substr(i,j-i+1);
            sum += stoi(temp);
        }
    }

    cout<<sum<<endl;
return 0;
}