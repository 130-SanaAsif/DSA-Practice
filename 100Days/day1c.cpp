#include<bits/stdc++.h>
using namespace std;
void printString(vector<string>&arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
string kDistinct(vector<string>&arr, int n, int k){
    unordered_map<string, int>mpp;

    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    if(mpp.size() < k){
        return "";
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(mpp[arr[i]] == 1){
            cnt++;
        }
        if(cnt == k){
            return arr[i];
        }
    }   

    return "";
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<string>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    printString(arr,n);
   cout<<kDistinct(arr,n,k);
return 0;
}