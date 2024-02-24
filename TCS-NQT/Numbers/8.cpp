#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    // if(n >= 0){
    //     cout<<n<<" is a positive number."<<endl;
    // }
    // else{
    //     cout<<n<<" is a negative number."<<endl;
    // }
    
    //using bitwise operator.
    if(n >> 31 == 0){
        cout<<n<<" is a positive number."<<endl;
    }
    else{
        cout<<n<<" is a negative number."<<endl;
    }
    return 0;
}