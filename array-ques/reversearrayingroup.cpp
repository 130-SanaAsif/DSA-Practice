#include<iostream>
using namespace std;
void PrintArray(int arr[], int n){
    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void ReverseArrayInGroup(int arr[], int n, int k){
    for(int i=0;i<n;i+=k){
        int left =i;
        int right;
        if(i+k-1<n-1){
            right = i+k-1;
        }
        else{
            right = n-1;
        }
        while(left<right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
    return;
}
int main(){
    int arr[] = {5,6,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    PrintArray(arr, n);
    ReverseArrayInGroup(arr, n, k);
    PrintArray(arr, n);
    return 0;
}