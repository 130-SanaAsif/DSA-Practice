#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 1010;

    int rev = 0;
    while(n){
        int d = n%10;
        rev = rev*10 + d;
        n = n/10;
    }

    cout<<rev<<endl;
return 0;
}