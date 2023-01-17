#include<bits/stdc++.h>
using namespace std;

bool isFeasible(int arr[], int n, int k, int res){
    int student = 1, sum = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > res){
            return false;
        }

        if(sum + arr[i] > res){
            student++;
            sum = arr[i];
        }
        else{
            sum += arr[i];
        }
    }
    if(student <= k){
        return true;
    }
    return false;
}

int findPages(int arr[], int n, int k){
if(k > n){
    return false;
}

    int maxi = INT_MIN, sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        maxi = max(maxi, arr[i]);
    }
    int low = maxi, high = sum, res = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(isFeasible(arr,n,k,mid)){
            res = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return res;
}

int main(){
    int arr[] = {15,17,20};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    int res = findPages(arr, n, k);
    cout<<res;
    return 0;
}