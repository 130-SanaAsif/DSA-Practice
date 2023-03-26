#include<bits/stdc++.h>
using namespace std;

int SingleElement(vector<int>&arr){
    int lo = 0, hi = arr.size()-1;
    while(lo < hi){
        int mid = (lo + hi)/2;
        if(mid % 2 == 1){
            mid--;
        }
        if(arr[mid] != arr[mid+1]){
            hi = mid;
        }
        else{
            lo = mid+2;
        }
    }
    return arr[lo];
}

int main(){
    vector<int>a = {1,1,2,2,3,3,4,4,8,8};
    int res = SingleElement(a);
    cout<<"Single Element in the array is : "<<res;
    return 0;
}