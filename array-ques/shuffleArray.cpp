#include<bits/stdc++.h>
using namespace std;

vector<int> shuffleAArray(vector<int>&arr, int n){
    
    if(n == 1){
        return arr;
    }

    vector<int>ans;

    for(int i=0; i<n; i++){
        ans.push_back(arr[i]);
        ans.push_back(arr[n+i]);
    }
    return ans;
}

int main(){
    vector<int>arr = {2,3,4,5,6,8,9,7};
    int n = 4;

    cout<<"Original Array : "<<endl;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Shuffle Array : "<<endl;
    vector<int>ans = shuffleAArray(arr,n);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}