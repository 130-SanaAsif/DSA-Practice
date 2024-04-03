#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
  

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int cnt = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            arr[cnt] = arr[i];
            cnt++;
        }
    }

    for(int i=cnt; i<n; i++){
        arr[i] = 0;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}