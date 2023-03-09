#include<bits/stdc++.h>
using namespace std;

//Using Linear Search.
//Time Complexity - O(n).
//Space Complexity - O(1).
int CountDuplicate(vector<int>&arr, int key){
    int cnt = 0;
    for(int i =0; i<arr.size();i++){
        if(arr[i] == key){
            cnt++;
        }
    }
    return cnt;
}

//Using Binary Search.
//Time Complexity - O(log n).
//Space Complexity - O(1).
int BinarySearch(vector<int>&arr, int key){
    int n = arr.size();
    int lo = 0, hi = n-1;
    while(lo < hi){
        int mid = (lo+hi)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key)
            lo = mid+1;
        else
            hi = mid-1;
    }
    return -1;
}

int CountDup(vector<int>&arr, int key){
    int n = arr.size();
    int ind = BinarySearch(arr,key);
    if(ind == -1){
        return 0;
    }
    int left = ind - 1, k= 1;
    while(left >= 0 && arr[left] == key){
        k++;
        left--;
    }
    int right = ind+1;
    while(right < n && arr[right] == key){
        k++;
        right++;
    }
    return k;
}
int main(){
    vector<int>arr = {2,2,3,3,3,3,4};
    int res = CountDuplicate(arr,3); 
    int ans = CountDup(arr,3);
    cout<<ans<<endl;
    cout<<res;
    
}