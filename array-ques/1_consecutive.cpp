#include<bits/stdc++.h>
using namespace std;

//Only work for binary number.
//TC - O(N).
//SC - O(1).
int ConsecutiveOne(vector<int>&nums){
    int cnt = 0, maxi = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == 1){
            cnt++;
        }
        else{
            cnt = 0;
        }
        maxi = max(cnt,maxi);
    }
    return maxi;
}

int main(){
    vector<int>a = {1,1,0,0,1,0,1,1,1,1};
    int res = ConsecutiveOne(a);
    cout<<res;
}