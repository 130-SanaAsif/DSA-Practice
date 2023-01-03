#include<iostream>
using namespace std;

int slarge(int arr[], int n){
    int max1 = -1, max2 = -1;
    for(int i=0; i<n; i++){
        max1 = max(max1,arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i] != max1)
            max2 = max(arr[i],max2);
    }
    return max2;
}

int main(){
    int arr[] = {90,23,45,87,9,8,89};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<slarge(arr,n);
}