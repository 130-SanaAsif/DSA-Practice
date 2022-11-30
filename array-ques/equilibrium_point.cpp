#include<iostream>
using namespace std;

int EquilibriumPoint(long long a[],int n){
    long long left = 0;
    long long sum =0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    for(int i=0; i<n; i++){
        long long right = sum-left-a[i];
        if(right == left){
            return i+1;
        }
           left += a[i];
    }
    return -1;
}

int main(){
    long long a[] = {1,3,5,2,2};
    int n = 5;
    int res = EquilibriumPoint(a,n);
    cout<<res;
    return 0;
}