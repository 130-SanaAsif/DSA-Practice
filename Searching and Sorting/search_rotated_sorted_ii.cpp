#include<bits/stdc++.h>
using namespace std;

bool search(vector<int>&nums, int target){
    int n = nums.size();
    int low = 0;
    int high = n-1;
    long int mid = -1;
    while(low <= high){
        mid = low + (high-low)/2;
        if(nums[mid] == target)
            return true;
        if(nums[mid] == nums[low] && nums[mid] == nums[high])
            low++, high--;
        else if(nums[mid] >= nums[low]){
            if(target >= nums[low] && target < nums[mid])
                high = mid-1;
            else
                low = mid+1;
        }
        else{
            if(target > nums[mid] && target <= nums[high])
                low = mid+1;
            else
                high = mid-1;
        }
    }
    return false;
}

int main(){
    vector<int>arr = {2,5,6,0,0,1,2};
    int target = 6;
    bool res = search(arr,target);
    cout<<res;
    return 0;
}