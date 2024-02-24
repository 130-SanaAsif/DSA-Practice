#include<iostream>
using namespace std;

bool isPerfectSquare(int n){
    int sum = 0;
    for(int i=1; i<=n-1; i++){
        if(n%i == 0){
            sum += i;
        }
    }

    if(sum == n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    if(isPerfectSquare(n)){
        cout<<n<<" is a perfect square number."<<endl;
    }
    else{
        cout<<n<<" is not a perfect square number."<<endl;
    }

    return 0;
}