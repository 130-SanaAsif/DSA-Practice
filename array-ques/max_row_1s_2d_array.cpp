#include<bits/stdc++.h>
using namespace std;

int first(vector<int>&v, int low, int high){
    if(high >= low){
        int mid = (low+high)/2;
        if((mid == 0 || v[mid-1] == 0) && v[mid] == 1){
            return mid;
        }
        else if(v[mid] == 0){
            return first(v, mid+1, high);
        }
        else{
            return first(v, low, mid-1);
        }
    }
    return -1;
}

int rowWithMax(vector<vector<int>>&arr, int n, int m){
    int row = -1, max = -1, index;
    for(int i=0; i<n; i++){
        index = first(arr[i], 0, m-1);
        if((index != -1) && (m-index>max)){
            max = m-index;
            row = i;
        }
    }
    return row;
}

int main(){
    vector<vector<int>>arr = {{0, 1, 1, 1},
            {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}};
    int n = 4, m = 4;
    int res = rowWithMax(arr,n,m);
    cout<<res;
    return 0;
}