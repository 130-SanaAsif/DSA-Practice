#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void SelectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            swap(arr[min],arr[i]);
        }
    }
}

int main(){
    int arr[] = {2,7,-4,0,56,89,23,-1,78};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    SelectionSort(arr,n);
    printArray(arr,n);
    return 0;
}