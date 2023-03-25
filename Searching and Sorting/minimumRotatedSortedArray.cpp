#include<bits/stdc++.h>
using namespace std;

//BruteForce Approach.
//Time Complexity - O(n).
//Space Complexity - O(1).
//int minimum(vector<int>&arr){
//    int minn = INT_MAX;
//    
//    for(int i=0; i<arr.size(); i++){
//        minn = min(minn,arr[i]); 
//    }
//    return minn;
//}

//Optimal Approach Using Binary Search.
//Time Complexity - O(log n).
//Space Complexity - O(1).
int minimum(vector<int>&arr){
    int n = arr.size();
    int lo = 0, hi = n-1;
    int minVal = INT_MAX;
    while(lo<=hi){
        if(arr[lo] < arr[hi]){
            minVal = min(minVal,arr[lo]);
            break;
        }
        int mid = (lo+hi)/2;
        if(arr[lo] <= arr[mid]){
            minVal = min(minVal,arr[lo]);
            lo = mid+1;
        }
        else{
            minVal = min(minVal,arr[mid]);
            hi = mid-1;
        }
    } 
    return minVal;
}
int main(){
    vector<int>arr = {3,1,2};
    int res = minimum(arr);
    cout<<"Minimum Element : "<<res;
    return 0;
}