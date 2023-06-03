#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[], int n){
    for(int i=1; i<n; i++){
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
    for(int i=1; i<=k; i++){
        for(int j=1; j<=k-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=k+1; i<n; i++){
        int maxIndex = i;
        for(int j=i; j<=n; j++){
            if(arr[j] > arr[maxIndex]){
                maxIndex = j;
            }
        }
        swap(arr[i],arr[maxIndex]);
    }
}

int main(){
    int arr[] = {0,11,7,5,10,46,23,16,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    printArray(arr,n);
    SortArray(arr,n,k);
    printArray(arr,n);
    return 0;
}