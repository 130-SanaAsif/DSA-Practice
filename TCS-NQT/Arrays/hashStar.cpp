#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    int cntHash = 0;
    int cntStar = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i] == '*'){
            cntStar++;
        }
        else{
            cntHash++;
        }
    }

    if(cntStar == cntHash){
        cout<<'0'<<endl;
    }
    else if(cntStar > cntHash){
        cout<<cntStar-cntHash<<endl;
    }
    else if(cntHash > cntStar){
        cout<<cntStar-cntHash<<endl;
    }

return 0;
}