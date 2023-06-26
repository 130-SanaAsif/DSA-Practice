#include<bits/stdc++.h>
using namespace std;

int SumAndProd(int n){
    int product = 1, sum = 0;
    while(n){
        product = product * (n%10);
        sum = sum + (n%10);
        n /= 10;
    }
    return product-sum;
}

int main(){
    int n = 234;
    int res = SumAndProd(n);
    cout<<res<<endl;
    return 0;
}