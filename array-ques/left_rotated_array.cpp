#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//void leftRotate(int arr[], int n, int k){
//    k%n;
//    rotate(arr,arr+k,arr+n);
//}
void Reverse(int arr[],int start,int end){
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void leftRotate(int arr[],int n, int k){
    Reverse(arr,0,k-1);
    Reverse(arr,k,n-1);
    Reverse(arr,0,n-1);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    cout<<"Before Rotating:"<<endl;
    printarray(arr,n);
    cout<<"After Rotating:"<<endl;
    leftRotate(arr,n,k);
    printarray(arr,n);
    return 0;
}