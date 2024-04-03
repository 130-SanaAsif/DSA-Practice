#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>&arr, int n, int val){
    int ans = 0;
    for(int i=0; i<n; i++){
        if(arr[ans] != val){
            arr[ans] = arr[i];
            ans++;
        }
    }
    return ans;
}

int main(){
    int n,val;
    vector<int>arr(n);
    cin>>n;

    cout<<"Enter a value = ";
    cin>>val;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    int res = removeElement(arr,n, val);
    cout<<res<<" ";

    for(int i=0; i<res; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}