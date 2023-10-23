#include<bits/stdc++.h>
using namespace std;

int classMonitor(int arr[], int n){
    int mini = INT_MAX;
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(arr[i] < mini){
            mini = arr[i];
            cnt++;
        }
    }

    return cnt-1;
}

int main(){
    int arr[] = {4,3,7,2,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int res = classMonitor(arr,n);
    cout<<res<<endl;
return 0;
}