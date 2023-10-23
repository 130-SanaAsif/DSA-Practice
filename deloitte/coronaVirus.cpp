#include<bits/stdc++.h>
using namespace std;

void coronaVirus(int arr[], int n, int spike){
    int ans;
    // int brr[n];

    for(int i=0; i<n;i++){
        int m = arr[i];
        ans = m>>spike;
        cout<<ans<<" ";
        // brr[i] = ans;
    }
    // for(int i=0; i<n; i++){
    //         cout<<brr[i]<<" ";
    //     }
    // cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int spike = 2;

    coronaVirus(arr,n,spike);


return 0;
}