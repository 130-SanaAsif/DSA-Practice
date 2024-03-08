#include<bits/stdc++.h>
using namespace std;

int altitude(int n, vector<int>&arr){
    int curAlt = 0;
    int maxAlt = 0;

    for(int i=0; i<n; i++){
        curAlt += arr[i];
        maxAlt = max(curAlt,maxAlt);
    }
    return maxAlt;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int ans = altitude(n,arr);
    cout << "The biker's highest altitude was" << ans << " meters, achieved at the end of his journey.";

        return 0;
}