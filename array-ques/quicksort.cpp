#include<iostream>
#include<algorithm>
using namespace std;

void PrintArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int Partition(int arr[], int low, int high){
    int i = low-1;
    int pivot = arr[high];
    for(int j = low; j<=high; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void QuickSort(int arr[], int low, int high){
    if(low<high){
        int pi = Partition(arr,low,high);
        QuickSort(arr, low, pi-1);
        QuickSort(arr, pi+1, high);
    }
}

int main(){
    int arr[] = {4,6,2,5,7,9,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"After Sorting : ";
    PrintArray(arr, n);
    cout<<"Before Sorting : ";
    QuickSort(arr, 0, n-1);
    PrintArray(arr, n);
    return 0;
}