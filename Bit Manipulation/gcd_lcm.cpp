#include<iostream>
using namespace std;

long long gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
long long gcd_lcm(int a, int b){
    long long temp = gcd(a,b);
    return (a / gcd(a, b)) * b;
}
int main(){
    long long a, b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"LCM of "<<a<<" and "<<b<<" : "<< gcd_lcm(a,b)<<endl;
    cout<<"GCD of "<<a<<" and "<<b<<" : "<< gcd(a,b);
    return 0;
}