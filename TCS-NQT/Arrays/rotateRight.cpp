#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rotateRight(int arr[], int n, int k){
    if(n == 0){
        return;
    }

    k = k % n;
    if(k > n){
        return;
    }
    int temp[k];
    for(int i=n-k; i<n; i++){
        temp[i-n+k] = arr[i];
    }

    for(int i=n-k-1; i>=0; i--){
        arr[i+k] = arr[i];
    }

    for(int i=0; i<k; i++){
        arr[i] = temp[i];
    }
}

int main(){
    int arr[] = {1,2,3,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;

    cout<<"Before rotation using approach 1 : "<<endl;
    printArray(arr,n);

    cout<<"After rotation using approach 1 : "<<endl;
    rotateRight(arr,n,k);
    printArray(arr,n);

    return 0;
}