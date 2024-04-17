#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r;
    cout<<"Value of n -> ";
    cin>>n;
    cout<<"Value of r -> ";
    cin>>r;
    
    int digit = 0;
    while(n){
        digit = digit + (n%10);
        n = n/10;
    }

    int times = r * digit;

    int possibleWays = 0;
    while(times){
        possibleWays = possibleWays + (times%10);
        times = times / 10;
    }

    cout<<possibleWays<<" -> possible ways to fill the cistern."<<endl;
return 0;
}