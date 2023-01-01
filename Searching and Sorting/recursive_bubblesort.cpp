#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void recurBubble(int arr[], int n){
    if(n==1){
        return;
    }
    int count = 0;
    for(int i=0; i<n-1; i++){
        if(arr[i+1] < arr[i]){
            swap(arr[i+1], arr[i]);
            count++;
        }
    }
    recurBubble(arr,n-1);
}

int main(){
    int arr[] = {90,87,3,29,-1,0,7,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Sorting:"<<endl;
    printArray(arr,n);
    cout<<"After Sorting:"<<endl;
    recurBubble(arr,n);
    printArray(arr,n);
    return 0;
}