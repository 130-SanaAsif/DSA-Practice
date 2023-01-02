#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Recur_Insert(int arr[], int n){
    if(n == 1){
        return;
    }

    Recur_Insert(arr,n-1);
    int key = arr[n-1];
    int j = n-2;
    while(j >= 0 && arr[j] > key){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
}

int main(){
    int arr[] = {6,8,9,10,1,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    Recur_Insert(arr,n);
    printArray(arr,n);
    return 0;
}