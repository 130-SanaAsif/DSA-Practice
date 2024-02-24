#include<iostream>
using namespace std;

int greaterDigit(int n){
    int maxi = 0;
    while(n){
        int digit = n%10;
        if(digit > maxi){
            maxi = digit;
        }
        n = n/10;
    }
    return maxi;
}
int minimumDigit(int n){
    int mini = n%10;
    while(n){
        int digit = n%10;
        if(digit < mini){
            mini = digit;
        }
        n = n/10;
    }
    return mini;
}

int main(){
    int digit;
    cout<<"Enter a number = ";
    cin>>digit;

    int res = greaterDigit(digit);
    int ans = minimumDigit(digit);
    cout<<"The greater digit in "<<digit<<" is "<<res<<endl;
    cout<<"The smaller digit in "<<digit<<" is "<<ans<<endl;

    return 0;
}