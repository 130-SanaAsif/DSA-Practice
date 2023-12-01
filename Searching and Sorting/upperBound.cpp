#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int>&arr, int x){
    int ans = arr.size();
    int low = 0;
    int high = arr.size()-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] > x){
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
    vector<int>arr = {2,3,6,7,8,8,11,11,11,12};
    int x = 7;
    int ans = upperBound(arr,x);
    cout<<ans<<endl;
return 0;
}