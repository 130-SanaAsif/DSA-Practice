#include<iostream>
using namespace std;

int main(){
    double a, b, c;
    cout<<"Enter the number1 = ";
    cin>>a;
    cout<<"Enter the number2 = ";
    cin>>b;
    cout<<"Enter the number3 = ";
    cin>>c;

    if(a > b && a > c){
        cout<<"Greater number is = "<<a<<endl;
    }
    else if(b > a && b > c){
        cout<<"Greater number is = "<<b<<endl;
    }
    else{
        cout<<"Greater number is = "<<c<<endl;
    }

    return 0;
}