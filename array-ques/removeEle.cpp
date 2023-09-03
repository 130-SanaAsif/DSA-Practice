#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>&num, int val){
    int ans = 0;
    for(int i=0; i<num.size(); i++){
        if(num[i] != val){
            nums[ans] = nums[i];
            ans++;
        }
    }
    return ans;
}

