#include<iostream>
using namespace std;

int reverseNum(int n){
    int rev = 0;
    while (n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 +digit;
        n = n/10;
    }
    return rev;
}
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    int dummy = n;
    int rev = reverseNum(n);
    if(rev == dummy){
        cout<<"Palindrome Number"<<endl;
    }
    else{
        cout<<"Not Palindrome Number"<<endl;
    }
    
    return 0;
}