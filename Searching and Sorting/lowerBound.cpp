#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>&arr, int x){
    int low = 0;
    int high = arr.size()-1;
    int ans = arr.size();

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int>arr = {3,5,8,15,19};
    int x = 8;
    int ans = lowerBound(arr,x);
    cout<<"The lower bound is = "<<ans<<endl;

    // int res = lower_bound(arr.begin(),arr.end(),8);
    // cout<<"Lower bound from stl"<<res<<endl;

return 0;
}