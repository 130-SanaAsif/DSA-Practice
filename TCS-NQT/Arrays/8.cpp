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

void blockSwap(int arr[], int k, int n){
    if (k == 0 || k == n)
        return;
    // If first part and second part are of same size
    if (k == n - k)
    {
        swap(arr, 0, n - k, k);
        return;
    }
    // If first part of array is of smaller size
    else if (k < n - k)
    {
        swap(arr, 0, n - k, k);
        blockSwap(arr, k, n - k); // second part of array is taken now
    }
    // If second part of array is of smaller size
    else
    {
        swap(arr, 0, k, n - k);
        blockSwap(arr + n - k, 2 * k - n, k);
    }
}

int main(){
    int n,k;
    int arr[n];

    cin>>n;
    cout<<"Value of k = ";
    cin>>k;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    printArray(arr, n);
    blockSwap(arr, k, n);
    printArray(arr, n);

return 0;
}