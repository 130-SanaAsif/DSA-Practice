#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n > 0){
        if(n%3 ==0 && n%5 == 0){
            cout<<'3';
            break;
        }
        else if(n%3 == 0){
            cout<<'1';
            break;
        }
        else if(n%5 == 0){
            cout<<'2';
            break;
        }
        else{
            cout<<'0';
            break;
        }
    }
    return 0;
}