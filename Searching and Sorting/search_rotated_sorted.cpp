#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        long int mid = -1;
        while(low <= high){
            mid = low + (high-low)/2;
            if(nums[mid] == target)
                return mid;
            if(nums[mid] >= nums[low]){
                if(target >= nums[low] && target < nums[mid])
                    high = mid-1;
                else low = mid+1;
            }
            else{
            if(target > nums[mid] && target <= nums[high])
                low = mid+1;
            else high = mid-1;
        }
        }
        return -1;
    }

//int binarySearch(int arr[], int n, int key){
//    int low = 0;
//    int high = n-1;
//    long int mid = -1;
//    while(low <= high){
//        mid = low + (high-low)/2;
//        if(arr[mid] == key){
//            return mid;
//        }
//        if(arr[mid] <= arr[low]){
//            if(key > arr[mid] && key <= arr[high])
//                low = mid+1;
//            else
//                high = mid-1;
//        }
//        else{
//            if(key >= arr[low] && key < arr[mid])
//                high = mid-1;
//            else
//                low = mid+1;
//        }
//    }
//    return -1;
//}

int main(){
    vector<int>arr = {4,5,6,7,0,1,2};
    //int n = sizeof(arr)/sizeof(arr[0]);
    int fnd = 0;
    int res = search(arr, fnd);
    if(res == -1){
        cout<<"Not Found";
    }
    else{
        cout<<"Found at index : "<<res;
    }
    return 0;
}