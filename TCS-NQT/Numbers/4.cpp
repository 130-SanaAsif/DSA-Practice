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
    int maxi, mini;
    cout<<"Enter the start number = ";
    cin>>maxi;
    cout<<"Enter the end number = ";
    cin>>mini;
    
    for(int i=maxi; i<= mini; i++){
        if(i != 1 && isPrime(i) == true){
            cout<<i<<" ";
        }
    }
    return 0;
}