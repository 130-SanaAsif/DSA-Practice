#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void incDecArray(int arr[], int n){
    sort(arr, arr+n);
    for(int i=0; i<n/2; i++){
        cout<<arr[i]<<" ";
    }

    for(int i=n-1; i>=n/2; i--){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    int arr[n];

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printArray(arr, n);
    incDecArray(arr, n);

    return 0;
}