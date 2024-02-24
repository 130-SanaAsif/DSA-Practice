#include<iostream>
using namespace std;

int main(){
    double a, b;
    cout<<"Enter the number 1 = ";
    cin>>a;
    cout<<"Enter the number 2 = ";
    cin>>b;

    if(a > b){
        cout<<"Greater number = "<<a<<endl;
    }
    else{
        cout<<"Greater number = "<<b<<endl;
    }
    
    return 0;
}