#include<bits/stdc++.h>
using namespace std;

int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int mul = 0;
        
        for(int i=0; i<n; i++){
            if(n%(i+1) == 0){
               mul += (nums[i]*nums[i]);
            }
        }
        
        return mul;
    }

int main(){
    vector<int>arr = {1,2,3,4};
    int res = sumOfSquares(arr);
    cout<<res<<endl;
    return 0;
}