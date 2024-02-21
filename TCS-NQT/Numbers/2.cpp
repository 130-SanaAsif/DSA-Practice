#include<iostream>
using namespace std;

//Time Complexity - O(n).
//Space Complexity - O(1).
bool palindrome(int n){
    int rev = 0;
    int temp = n;
    while(temp > 0){
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    if(n == rev) return true;
    return false;
}

int main(){
    int max, min;
    cout<<"Enter the min number = ";
    cin>>min;
    cout<<"Enter the max number = ";
    cin>>max;

    for(int i=min; i <= max; i++){
        if(palindrome(i)){
            cout<<i<<" ";
        }
    }

    return 0;
}