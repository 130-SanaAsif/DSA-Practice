#include<bits/stdc++.h>
using namespace std;

void unsort(vector<int>&arr){
    int n = arr.size();
    unordered_map<int,int>mpp;

    for(int i=0; i<n; i++){
        if(mpp.find(arr[i]) == mpp.end()){
            cout<<arr[i]<<" ";
            mpp[arr[i]];
        }
    }

    
}

int main(){
    vector<int>arr = {1,2,4,6,1,2,1,3,4,1};
    unsort(arr);
return 0;
}