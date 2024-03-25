#include<bits/stdc++.h>
using namespace std;

long long reverseDigit(long long n){
    long long rev = 0;
    while(n--){
        rev = rev*10 + n%10;
        n = n/10;
    }
    return rev;
}

bool checkPudding(long long n){
    long long ori = n;

    long long rev1 = reverseDigit(n);
    long long rev2 = reverseDigit(rev1);

    if(ori != rev2){
        return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        if(checkPudding(n) == true){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
return 0;
}