#include<iostream>
using namespace std;

int ArithmeticNumber(int a, int b, int c){
    if(c == 0){
        return a == b;
    }

    return (b-a)%c == 0 && (b-a)/c >= 0;
}

int main(){
    int a, b, c;
    cout<<"Enter the value of A: "<<endl;
    cin>>a;
    cout<<"Enter the value of B: "<<endl;
    cin>>b;
    cout<<"Enter the value of C: "<<endl;
    cin>>c;
    int res = ArithmeticNumber(a,b,c);
    cout<<"Answer is: "<<res<<endl;
    return 0;
}