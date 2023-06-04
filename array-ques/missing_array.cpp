#include<iostream>
#include<vector>
using namespace std;

int missingNo(vector<int>&arr){
    int n = arr.size() + 1;
    int sum=0, sumall=0;
    for(int i=0;i<n-1;i++){
        sum = sum+arr[i];
    }
    sumall = n*(n+1)/2;
    return sumall-sum;
}

int missing(vector<int>&arr, int n){
    int xor1 = 0, xor2 = 0;
    for(int i=0; i<n-1; i++){
        xor2 = xor2^arr[i];
        xor1 = xor1^(i+1);
    }
    xor1 = xor1^n;
    return (xor1^xor2);
}
int main(){
    vector<int>arr = {6,1,2,8,3,4,7,10,5};
    int n = 10;
    int res = missingNo(arr);
    cout<<res<<endl;
    int res1 = missing(arr,n);
    cout<<res1<<endl;
    return 0;
}