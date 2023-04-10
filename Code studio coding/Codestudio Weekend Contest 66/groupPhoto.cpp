#include<bits/stdc++.h>
using namespace std;

int groupPhoto(vector<int>&arr){
    int maxi = INT_MIN;
    int n = arr.size();
    for(int i=1; i<n-1;i++){
        maxi = max(maxi,arr[i]);
    }
    return max(arr[0]+arr[n-1],max(arr[0]+maxi,arr[n-1]+maxi));
}

int main(){
    vector<int>a = {3,1,2,1,4};
    int res = groupPhoto(a);
    cout<<res;
    return 0;
}