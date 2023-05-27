#include<iostream>
using namespace std;

void print(int n){
    if(n == 0){
        return;
    }
    else{
        cout<<n<<endl;
        return print(n-1);
    }
}  

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(n);
    return 0;
}