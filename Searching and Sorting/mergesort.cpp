#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int arr[], int low, int high, int mid){
    int i,j,k,brr[100];
    i = low;
    j = mid+1;
    k = low;

    while(i <= mid && j <= high){
        if(arr[i] < arr[j]){
            brr[k] = arr[i];
            i++;
            k++;
        }
        else{
            brr[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i <= mid){
        brr[k] = arr[i];
        k++;
        i++;
    }
    while(j <= high){
        brr[k] = arr[j];
        j++;
        k++;
    }
    for(int i=low; i<= high; i++){
        arr[i] = brr[i];
    }
}

void mergesort(int arr[], int low, int high){
    int mid;
    if(low < high){
        mid = (low+high)/2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        merge(arr, low, high, mid);
    }
}

int main(){
    int arr[] = {23, 56, 67, 54, 9, 2, 5, 1, 75};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sorting: \n");
    printArray(arr,n);
    printf("After Sorting: \n");
    mergesort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}