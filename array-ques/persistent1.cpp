#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void SortArray(int arr[], int n, int k){
    k = k-1;
    for(int i=0; i<k; i++){
        for(int j=0; j<k-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=k+1; i<n; i++){
        int maxIndex = i;
        for(int j=i; j<n-1; j++){
            if(arr[j] > arr[maxIndex]){
                maxIndex = j;
            }
        }
        swap(arr[i],arr[maxIndex]);
    }
}

int main(){
    int arr[] = {11,7,5,10,46,23,16,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    printArray(arr,n);
    SortArray(arr,n,k);
    printArray(arr,n);
    return 0;
}