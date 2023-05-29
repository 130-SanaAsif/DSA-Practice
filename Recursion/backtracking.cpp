#include<bits/stdc++.h>
using namespace std;

void OneToN(int i, int n){
    if(i<1)
        return;
    OneToN(i-1,n);
    cout<<i<<endl;
}  
void NToOne(int i, int n){
    if(i > n)
        return;
    NToOne(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n=10;
    //OneToN(n,n);
    NToOne(1,n);
    return 0;
}