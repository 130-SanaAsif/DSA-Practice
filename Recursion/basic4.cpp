#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 0;
    if(n==1){
        return 1;
    }
    else{
        
        return (n * factorial(n-1));
    }
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
}