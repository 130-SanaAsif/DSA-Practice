#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//void ReverseArray(int arr[], int n, int i){
//    if(i >= n/2){
//        return;
//    }
//    swap(arr[i], arr[n-i-1]);
//    return ReverseArray(arr,n,i+1);
//}
void reverseArray(int arr[], int n){
    
    return reverse(arr, arr + n);
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Before Reversing:"<<endl;
    printarray(arr,n);
    cout<<"After Reversing:"<<endl;
    reverseArray(arr,n);
    printarray(arr,n);
    return 0;
}