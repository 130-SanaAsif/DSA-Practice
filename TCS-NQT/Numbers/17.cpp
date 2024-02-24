#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;

    int a = 0;
    int b = 1;
    int c = 0;
    cout<<a<<" "<<b<<" ";
    for(int i=2; i<=n; i++){
        c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
    }

    return 0;
}