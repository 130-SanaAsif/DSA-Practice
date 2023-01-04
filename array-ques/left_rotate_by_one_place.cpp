#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void leftRotate(int arr[], int n){
    int temp = arr[0];
    for(int i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Rotating:"<<endl;
    printarray(arr,n);
    cout<<"After Rotating:"<<endl;
    leftRotate(arr,n);
    printarray(arr,n);
    return 0;
}