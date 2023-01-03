#include<bits/stdc++.h>
using namespace std;
//TC = O(N).
//SC = O(1).
int removeDuplicate(int arr[],int n){
    if(n==0){
        return 0;
    }
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}
int main(){
    int arr[] = {1,2,2,2,5,5,5,5,5,5,5,7,7,7,8,8,8,8,9,9,20,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = removeDuplicate(arr,n);
    for(int i=0; i<k; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}