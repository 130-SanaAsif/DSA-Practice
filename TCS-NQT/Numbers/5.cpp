#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

bool isArmstrong(int n){
    int original = n;
    int cnt = 0;
    int temp = n;

    while(temp != 0){
        cnt++;
        temp = temp/10;
    }

    int sumofPower = 0;
    while(n != 0){
        int digit = n % 10;
        sumofPower = sumofPower + pow(digit, cnt);
        n = n/10;
    }

    return (original == sumofPower);
}

int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    if(isArmstrong(n)){
        cout<<n<<" is an Arstrong number."<<endl;
    }
    else{
        cout<<n<<" is not an Armstrong number."<<endl;
    }
    return 0;
}