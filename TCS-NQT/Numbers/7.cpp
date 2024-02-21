#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;

    if(n%2 == 0){
        cout<<"Number "<<n<<" is Even."<<endl;
    }
    else{
        cout<<"Number "<<n<<" is Odd."<<endl;
    }
    return 0;
}