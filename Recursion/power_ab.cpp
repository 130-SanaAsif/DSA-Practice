#include<iostream>
using namespace std;

int power(int a, int b){
    if(b!=0){
      return (a * power(a,b-1));
    }
    return 1;
}
int main(){
    int a, b;
    cout<<"Enter a value of a: ";
    cin>>a;
    cout<<"Enter a value of b: ";
    cin>>b;
    cout<<power(a,b);
    return 0;
}