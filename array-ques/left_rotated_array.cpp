#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void leftRotate(int arr[], int n, int k){
    k%n;
    rotate(arr,arr+k,arr+n);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    cout<<"Before Rotating:"<<endl;
    printarray(arr,n);
    cout<<"After Rotating:"<<endl;
    leftRotate(arr,n,k);
    printarray(arr,n);
    return 0;
}