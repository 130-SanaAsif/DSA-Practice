#include<bits/stdc++.h>
using namespace std;

void miniMax(vector<int>&arr){
    int n = arr.size();
    int sum = 0;
    int maxSum = 0;
    int minSum = 0;

    sort(arr.begin(), arr.end());
    for(int i=1; i<n; i++){
        maxSum = maxSum+arr[i];
    }

    for(int i=0; i<n-1; i++){
        minSum = minSum+arr[i];
    }
    
    cout<<minSum<<" "<<maxSum<<endl;
}

int main(){
    vector<int>arr = {1,2,3,4,5};
    miniMax(arr);
}