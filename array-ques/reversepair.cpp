#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach.
//TC - O(N*2).
//SC - O(1).
//int reversePair(vector<int>&arr){
//    int cnt = 0;
//    for(int i=0; i<arr.size(); i++){
//        for(int j=1; j<arr.size(); j++){
//            if(arr[i] > 2*arr[j]){
//                cnt++;
//            }
//        }
//    }
//    return cnt;
//}
int merge(vector<int>&nums, int low ,int mid, int high){
    int cnt=0;
    int j = mid+1;
    for(int i=low; i<=mid; i++){
        while(j <= high && nums[i] > 2ll*nums[j]){
            j++;
        }
        cnt += (j-(mid+1));
    } 
    vector<int>t;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(nums[left] <= nums[right]){
            t.push_back(nums[left++]);
        }
        else{
            t.push_back(nums[right++]);
        }
    }

    while(left <= mid){
        t.push_back(nums[left++]);
    }

    while(right <= high){
        t.push_back(nums[right++]);
    }

    for(int i=low; i<=high; i++){
        nums[i] = t[i-low];
    }
    return cnt;
}

int mergeSort(vector<int>&nums, int low, int high){
    if(low >= high) return 0;
    int mid = (low+high)/2;
    int inv = mergeSort(nums,low,mid);
    inv += mergeSort(nums,mid+1,high);
    inv += merge(nums,low,mid,high);
    return inv;
}

int reversePair(vector<int>&nums){
    return mergeSort(nums,0,nums.size()-1);
}

int main(){
    vector<int>arr = {40,25,29,12,9,6,2};
    int res = reversePair(arr);
    cout<<res;
    return 0;
}