#include<bits/stdc++.h>
using namespace std;

long long pairWithSum(long long arr[], long long n){
    if(n < 2){
        return -1;
    }
    long long res = arr[0] + arr[1];
    for(int i=1; i<n-1; i++){
        res = max(res, arr[i] + arr[i+1]);
    }
    return res;
}

int main(){
    long long arr[] = {9,8,3,6,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    long long res = pairWithSum(arr,n);
    cout<<res;
    return 0;
}