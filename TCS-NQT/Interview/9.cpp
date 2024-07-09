#include<iostream>
using namespace std;

int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }
    
    return fib(n-2)+fib(n-1);
}

int main(){
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;

    int a = 0, b = 1;
    int c;
    cout<<a<<" "<<b<<" ";
    for(int i=2; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
        cout<<c<<" ";
    }

    int res = fib(n);
    cout<<endl<<"result = "<<res;
    return 0;
}