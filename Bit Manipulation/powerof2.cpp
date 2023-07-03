#include<bits/stdc++.h>
using namespace std;

//Aproach 1.
//Brute Force.

//bool isPowerOfTwo(int n){
//    for(int i=0; i<=30; i++){
//        if(pow(2,i) == n){
//            return true;
//        }
//    }
//    return false;
//}

//Approach 2.
//Using reminder - dividend method.

bool isPowerOfTwo(int n){
    if(n == 0) return false;
    while(n%2 == 0) n/=2;
    return n==1;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    bool res = isPowerOfTwo(n);
    if(res == 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}