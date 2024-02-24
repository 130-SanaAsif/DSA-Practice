#include<iostream>
using namespace std;

int reverseDigit(int n){
    int rev = 0;

    while(n){
        int digit = n%10;
        rev = rev*10+digit;
        n /= 10;
    }
    return rev;
}

int main(){
    int digit;
    cout<<"Enter a number = ";
    cin>>digit;

    int res = reverseDigit(digit);
    cout<<"Reverse = "<<res<<endl;

    return 0;
}