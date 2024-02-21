#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    bool ans = isPrime(n);
    if(n != 1 && ans == true){
        cout<<"Prime Number";
    }
    else{
        cout<<"Non-prime Number";
    }

    return 0;
}