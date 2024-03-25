#include<bits/stdc++.h>
using namespace std;

void printArray(int n, vector<int>&arr){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int dreamyCars(int n, vector<int>&arr){
    
    int res = 0;
    for(int i=0; i<n; i++){
        int ans = 0;
        for(int j = i; j<n; j++){
            ans ^= arr[j];
            res ^= ans;
        }
    }

    return res;
}

int methodTwo(int n, vector<int>&arr){
    int ans = 0;
    if(n & 1){
        for(int i=0; i<n; i+=2){
            ans ^= arr[i];
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
 
    printArray(n,arr);

    int res =dreamyCars(n,arr);
    int ans = methodTwo(n,arr);
    cout<<ans<<endl;
    cout<<res;
return 0;
}