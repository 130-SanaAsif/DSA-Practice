#include<bits/stdc++.h>
using namespace std;
//TC - O(logN).
//SC- O(1).
int UpperBound(int arr[], int n, int k){
    int mid, high, low, ans = -1;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid] == k){
            return 1;
        }
        if(arr[mid] < low){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {1,2,8,10,11,12,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    int res = UpperBound(arr,n,k);
    cout<<res;
    return 0;
}