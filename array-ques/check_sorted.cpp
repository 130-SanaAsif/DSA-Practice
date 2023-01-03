#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
        int size = nums.size();
        int counter = 0;
        for(int i = 0; i < size; i++)
        {
            if(nums[i] > nums[(i+1)%size])
            {
                counter++;
            }
        }
        if(counter <= 1)
        {
            return true;
        }else{
            return false;
        }
    }

int main(){
    //vector<int>arr = {3,4,5,1,2};
    vector<int>arr = {2,1,3,4};
    cout<<check(arr);
    return 0;
}