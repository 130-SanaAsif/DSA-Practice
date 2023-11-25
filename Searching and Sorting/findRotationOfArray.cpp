#include<bits/stdc++.h>
using namespace std;

int findKRotation(vector<int>&arr){
    int minVal = INT_MAX;
    int minValPos = -1;

    int left = 0;
    int right = arr.size()-1;

    while(left <= right){
        int mid = (left + right )/2;
        if(arr[left] <= arr[right]){
            if(arr[left] < minVal){
                minValPos = left;
                minVal = arr[left];
            }
            break;
        }

        if(arr[left] <= arr[mid]){
            if(arr[left] < minVal){
                minValPos = left;
                minVal = arr[left];
            }
            left = mid+1;
        }
        else{
            right = mid-1;
            if(arr[mid] < minVal){
                minValPos = mid;
                minVal = arr[mid];
            }
        }
    }
    return minValPos;
}


int main(){
    vector<int>arr = {22,29,32,35,37,40,42,43,44,50,2,7,10,13};
    int ans = findKRotation(arr);
    cout<<ans<<endl;
return 0;
}