#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int LargestSubArray(vector<int>&arr, int n){
    unordered_map<int, int>mp;
    int sum = 0;
    int max_len = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum == 0)
            max_len = i+1;

        if(mp.find(sum) != mp.end()){
            max_len = max(max_len, i-mp[sum]);
        }
        else{
            mp[sum] = i;
        }
    }
    return max_len;
}

int main(){
    vector<int>arr = {15,-2,2,-8,1,7,10,23};
    int n = 8;
    int res = LargestSubArray(arr, n);
    cout<<"The length of largest subarray is: "<<res;
    return 0;
}