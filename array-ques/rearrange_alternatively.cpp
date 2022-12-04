#include<iostream>
using namespace std;

void printArray(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rearrange(int arr[], int n){
    int max_ind = n-1, min_ind = 0;
    int max_ele = arr[n-1]+1;

    for(int i=0; i<n; i++){
        if(i%2 == 0){
            arr[i] += (arr[max_ind]%max_ele)*max_ele;
            max_ind--;
        }
        else{
            arr[i] += (arr[min_ind]%max_ele)*max_ele;
            min_ind++;
        }
    }
    for(int i=0; i<n; i++){
        arr[i] = arr[i]/max_ele;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Rearrange: "<<endl;
    printArray(arr,n);
    rearrange(arr,n);
    cout<<"After Rearrange: "<<endl;
    printArray(arr, n);
    return 0;
}