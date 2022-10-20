#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void printArray(vector<int>&nums, int n){
    for(int i = 0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
bool ContainDup(vector<int>&nums, int n){
    sort(begin(nums), end(nums));
    bool result = false;
    for(int i = 1; i<n ; i++){
        if(nums[i] == nums[i-1]){
            result = true;
        }
    }
    return result;
}
int main(){
    vector<int>nums = {1,2,3,4,1,3,3};
    int n = sizeof(nums) /sizeof(nums[0]);
    //printArray(nums, n);
    bool res = ContainDup(nums, n);
    cout<<res;
    return 0;
}