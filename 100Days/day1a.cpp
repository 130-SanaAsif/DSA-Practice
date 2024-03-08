#include<bits/stdc++.h>
using namespace std;

void reverse(vector<char>&arr, int n){
    int lo = 0;
    int hi = n-1;
    while(lo < hi){
        swap(arr[lo], arr[hi]);
        lo++;
        hi--;
    }
}

int main(){
    int n, k;
    cin >> n >> k;
   
    vector<char>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // for(int i=0; i<n; i++){
    //     cout<<arr[i];
    // }
    //cout<<endl;
    reverse(arr,n);

    // for(int i=0; i<n; i++){
    //     cout<<arr[i];
    // }
    //cout<<endl;
    for(int i=0; i<n; i++){
        if(i+1 == k){
            cout<<arr[i];
        }
    }
    
return 0;
}