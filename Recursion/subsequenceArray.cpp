#include<bits/stdc++.h>
using namespace std;

void SubArray(int ind, vector<int>&ds, int arr[], int n){
    if(ind == n){
        for(int i=0; i<ds.size(); i++){
            cout<<ds[i]<<" ";
        }
        if(ds.size() == 0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    //Take.
    ds.push_back(arr[ind]);
    SubArray(ind+1, ds, arr, n);
    ds.pop_back();
    //Non-Take.
    SubArray(ind+1, ds, arr, n);
}

int main(){
    int arr[] = {1,2,2};
    int n = 3;
    vector<int>ds;
    SubArray(0,ds,arr,n);
    return 0;
}