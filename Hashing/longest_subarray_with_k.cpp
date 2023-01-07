#include<bits/stdc++.h>
using namespace std;

int Subarray(int arr[], int n, int k){
    int res = 0;
    int sum = 0;
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++){
        sum += arr[i];

        if(sum == k){
            res = i+1;
        }

        if(mp.find(sum-k) != mp.end()){
            res = max(res, i-mp[sum]);
        }
        if(mp.find(sum-k) == mp.end()){
            mp[sum] = i;
        }
    }
    return res;
}

int main(){
    int arr[] = {10, 5, 2, 7, 1, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 15;
    int res = Subarray(arr,n,k);
    cout<<res;
    return 0;
}