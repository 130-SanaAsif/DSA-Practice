#include<bits/stdc++.h>
using namespace std;


//Brute force approach.
//TC-O(N^2).
//SC - O(1).
int maxProductSubarray(vector<int>&arr){
    int res = INT_MIN;
    for(int i=0; i<arr.size();i++){
        for(int j=i+1; j<arr.size(); j++){
            int mux = 1;
            for(int k=i; k<=j; k++){
                mux*=arr[k];
            }
            res = max(res,mux);
        }
    }
    return res;
}

//Optimised Brute Force Approach.
//TC-O(N^2).
//SC-O(1).
int maxProductSub(vector<int>&nums){
    int res = nums[0];
    for(int i=0; i<nums.size()-1;i++){
        int p = nums[i];
        for(int j=i+1; j<nums.size(); j++){
            res = max(res,p);
            p*=nums[j];
        }
        res = max(res,p);
    }
    return res;
}

//Two Traversal Approach.
//TC-O(N).
//SC-O(1).
int MaxProduct(vector<int>&nums){
    int left = nums[0];
    int right = nums[0];
    bool zero = false;
    int p=1;
    for(int i=0; i<nums.size(); i++){
        p*=nums[i];
        if(nums[i] == 0){
            zero = true;
            p=1;
            continue;
        }
        left = max(left,p);
    }

    p = 1;
    for(int j= nums.size()-1; j>=0; j--){
        p*=nums[j];
        if(nums[j] == 0){
            zero = 0;
            p=1;
            continue;
        }
        right = max(right,p);
    }
    if(zero) return max(max(left,right),0);
    return max(left,right);
}
//Optimised approach.
//TC-O(N).
//SC-O(1).
int maxProduct(vector<int>&arr){
    int prod1 = arr[0], prod2 = arr[0],res = arr[0];

    for(int i=1; i<arr.size(); i++){
        int temp = max({arr[i], prod1*arr[i], prod2*arr[i]});
        prod2 = min({arr[i], prod1*arr[i], prod2*arr[i]});
        prod1 = temp;

        res = max(res,prod1);
    }
    return res;
}

int main(){
    vector<int>arr = {1,2,-3,0,-4,-5};
    int res = MaxProduct(arr);
    cout<<res;
    return 0;
}
