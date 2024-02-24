#include<iostream>
using namespace std;

float APSum(float a, float d, float n){
    
    float sum = (n/2.0)*(2.0*a + (n-1)*d);
    return sum;
}

int main(){
    float a,d,n;
    cout<<"Enter the first term = ";
    cin>>a;
    cout<<"Enter the  common differnce = ";
    cin>>d;
    cout<<"Enter the number os terms = ";
    cin>>n;

    float res = APSum(a,d,n);
    cout<<"AP = "<<res<<endl;

    return 0;
}