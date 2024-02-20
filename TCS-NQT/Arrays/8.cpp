#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int arr[], int a, int b, int k){
    for(int i=0; i<k; i++){
        int temp = arr[a+i];
        arr[a+i] = arr[b+i];
        arr[b+i] = temp;
    }
}

int main(){
    int n,k;
    int arr[n];

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>k;

return 0;
}