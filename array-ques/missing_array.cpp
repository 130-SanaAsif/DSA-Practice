#include<iostream>
#include<vector>
using namespace std;

int missingNo(vector<int>&arr, int n){
    int sum=0, sumall=0;
    for(int i=0;i<n-1;i++){
        sum = sum+arr[i];
    }
    sumall = n*(n+1)/2;
    return sumall-sum;
}

int main(){
    vector<int>arr = {6,1,2,8,3,4,7,10,5};
    int n = 10;

    int res = missingNo(arr, n);
    cout<<res;
    return 0;
}