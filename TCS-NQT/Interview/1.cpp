#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the value of a = ";
    cin>>a;
    cout<<"Enter the value of b = ";
    cin>>b;

    a = a+b;
    b = a-b;
    a = a-b;

    cout<<"VALUE OF A = "<<a<<endl;
    cout<<"VALUE OF B = "<<b<<endl;


    // Using Method 2.



    a = a^b;
    b = a^b;
    a = a^b;

    cout<<"USING APPROACH 2 VALUE OF A = "<<a<<endl;
    cout<<"USING APPROACH 2 VALUE OF B = "<<b<<endl;

    return 0;
}