#include<bits/stdc++.h>
using namespace std;

string cipherText(int key, string str){
    int n = str.size();
    for(int i=0; i<n; i++){
        if(str[i] != ' '){
            //a to z
            //valid
            //carry
            if(str[i] >= 'a' && str[i] <= 'z'){
                if((str[i]+key) <= 'z'){
                    str[i] = (int)(str[i]+key);
                }
                else{
                    str[i] = (int)(str[i]+key-'z'+'a'-1);
                }
            }
            //A to Z
            //valid
            //carry
            if(str[i] >= 'A' && str[i] <= 'Z'){
                if((str[i]+key) <= 'Z'){
                    str[i] = (int)(str[i]+key);
                }
                else{
                    str[i] = (int)(str[i]+key-'Z'+'A'-1);
                }
            }
            //0 to 9
            //valid
            //carry
            if(str[i] >= '0' && str[i] <= '9'){
                if((str[i]+key) <= '9'){
                    str[i] = (int)(str[i]+key);
                }
                else{
                    str[i] = (int)(str[i]+key-'9'+'0'-1);
                }
            }
        }
    }
    return str;
}


int main(){
    string plainText;
    int key;

    cout<<"Enter your plaintext : ";
    // cin>>plainText;
    getline(cin,plainText);
    cout<<"Enter the key : ";
    cin>>key;

    if(key<0){
        cout<<"INVALID INPUT"<<endl;
        return 0;
    }

    if(key == 0){
        cout<<plainText<<endl;
    }

    string res = cipherText(key,plainText);
    cout<<res;
return 0;
}