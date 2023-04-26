#include<bits/stdc++.h>
using namespace std;

//Brute Force.
//Time Complexity - O(N^2)
//Space Complexity - O(1);
long long sumOfSubarray(vector<int>&nums){
    long long ans = 0, n = nums.size();
    for(int i=0; i<n; i++){
        int maxi = INT_MIN,mini = INT_MAX;
        for(int j=i; j<n; j++){
            maxi = max(maxi,nums[j]);
            mini = min(mini, nums[j]);
            ans += maxi-mini;
        }
    }
    return ans;
}

//Optimized Approach.
long long sumOfSubarrayRanges(vector<int>&nums){
    int n = nums.size();
    vector<int>next_greater(n,-1),prev_greater(n,n);
    vector<int>next_smaller(n,-1),prev_smaller(n,n);
    stack<int>s1,s2,s3,s4;

    //Next Greater Element.
    for(int i=n-1; i>=0; i--){
        while(!s1.empty() && nums[s1.top()]<= nums[i]){
            next_greater[s1.top()] = i;
            s1.pop();
        }
        s1.push(i);
    }

    //Previous Greater Element.
    for(int i=0; i<n; i++){
        while(!s2.empty() && nums[s2.top()] < nums[i]){
            prev_greater[s2.top()] = i;
            s2.pop();
        }
        s2.push(i);
    }

    //Next Smaller Element.
    for(int i=n-1; i>=0; i--){
        while(!s3.empty() && nums[s3.top()] >= nums[i]){
            next_smaller[s3.top()] = i;
            s3.pop();
        }
        s3.push(i);
    }

    //Previous Smaller Element.
    for(int i=0; i<n; i++){
        while(!s4.empty() && nums[s4.top()] > nums[i]){
            prev_smaller[s4.top()] = i;
            s4.pop();
        }
        s4.push(i);
    }

    long long ans = 0;
    for(int i=0; i<n; i++){
        long long maxi = (prev_greater[i] -i)*(i- next_greater[i]);
        long long mini = (prev_smaller[i]-i)*(i-next_smaller[i]);
        ans+=(maxi*nums[i]);
        ans-=(mini*nums[i]);
    }
    return ans;
}
int main(){
    vector<int>arr ={1,2,3};
    long long ans = sumOfSubarrayRanges(arr);
    cout<<ans;
    return 0;
}