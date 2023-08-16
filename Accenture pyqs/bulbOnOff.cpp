#include<bits/stdc++.h>
using namespace std;

int bulbOnOff(int arr[], int n){
    // int cnt = 0;
    // for(int i=0; i<n; i++){
    //     arr[i] = 1;
    // }
    // for(int i=0; i<n; i++){
    //     if(i%1 == 0){
    //         arr[i] = 0;
    //     }
    // }

    // for(int i=1; i<=n; i++){
    //     if(i%3 == 0){
    //         arr[i] = 0;
    //     }
    //     else{
    //         arr[i] = 1;
    //     }
    // }

    // for(int i=0; i<n; i++){
    //     if(arr[i] == 1){
    //         cnt++;
    //     }
    // }
    return sqrt(n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        arr[i] = 0;
    }
    cout<<"Given Array: [ ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;

    int res = bulbOnOff(arr,n);
    cout<<res<<endl;
}