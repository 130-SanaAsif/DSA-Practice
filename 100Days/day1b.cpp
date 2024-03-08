#include<bits/stdc++.h>
using namespace std;

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
    int altitude = 0;
    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            altitude = arr[i] - altitude;
        }
        
        altitude = arr[i] + altitude;
    }
    
    cout<<altitude<<endl;

return 0;
}