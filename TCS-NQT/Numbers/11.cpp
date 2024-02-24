#include<iostream>
#include<math.h>
#include<algorithm> 
using namespace std;

float sumOfGP(float a, float r, float n){
    float sum = (a*(pow(r,n)-1))/(r-1);
    return sum;
}

int main(){
    float r, n, a;
    cout<<"Enter the first term = ";
    cin>>a;
    cout<<"Enter the common ration = ";
    cin>>r;
    cout<<"Enter the number of terms = ";
    cin>>n;

    float res = sumOfGP(a,r,n);
    cout<<"GP = "<<res;

    return 0;

}