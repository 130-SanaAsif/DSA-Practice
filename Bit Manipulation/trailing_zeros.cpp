#include<bits/stdc++.h>
using namespace std;
    
    bool hasTrailingZeros(vector<int>& nums) {
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=0; j<nums.size(); j++){
        //         if(nums[i]%2 == 0 && nums[j]%2 == 0){
        //             return true;
        //         }
        //     }
        // }
        // return false;

        for(int i=0; i<nums.size(); i++){
            for(int j= i+1; j<nums.size(); j++){
                if(nums[i] | nums[j] & 1^1){
                    return true;
                }
            }
        }
        return false;
    }
int main(){
    vector<int>arr = {1,2,3,4,5};
    if(hasTrailingZeros(arr)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
return 0;
}