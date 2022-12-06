#include<iostream>
#include<algorithm>
using namespace std;

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void ZigZag(int arr[], int n){
    bool flag;
    for(int i=0; i<=n-2;i++){
        if(flag){
            if(arr[i] < arr[i+1])
                swap(arr[i], arr[i+1]);
        }
        else{
            if(arr[i] > arr[i+1])
                swap(arr[i], arr[i+1]);
        }
        flag =! flag;
    }
}

int main(){
    int arr[] = {4, 3, 7, 8, 6, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Zig-Zag: ";
    display(arr,n);
    cout<<"After Zig-Zag: ";
    ZigZag(arr,n);
    display(arr,n);
    return 0;
}