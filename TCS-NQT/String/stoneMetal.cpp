#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    string s2;

    cout<<"Stone - ";
    cin>>s1;
    cout<<"Metal - ";
    cin>>s2;

    int metal = 0;
    for(int i=0; i<s2.length(); i++){
        for(int j = 0; j<s1.size(); j++){
            if(s1[j] == s2[i]){
                metal++;
            }
        }
    }

    cout<<metal<<" metal are present in the stone."<<endl;
return 0;
}