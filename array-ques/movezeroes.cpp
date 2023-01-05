#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void MakeZeroes(int arr[], int n){
    int k=0;
    while(k<n){
        if(arr[k] == 0){
            break;
        }
        else{
            k+=1;
        }
    }

    int i=k, j=k+1;
    while(i<n && j<n){
        if(arr[j] != 0){
            swap(arr[i],arr[j]);
            i++;
        }
        else{
            j++;
        }
    }
}

int main(){
    int arr[] = {1,0,2,0,0,4,1,3,5,0};
    int n = sizeof(arr)/sizeof(arr[0]); 
    printArray(arr,n);
    MakeZeroes(arr,n);
    printArray(arr,n);
    return 0;
}