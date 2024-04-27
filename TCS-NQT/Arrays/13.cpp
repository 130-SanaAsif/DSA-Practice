#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void insertAtBeg(int arr[], int n, int key){
    for(int i=n-1; i>=0; i--){
        arr[i+1] = arr[i];
    }

    arr[0] = key;
}

void insertAtMid(int arr[], int n, int key, int pos){
    for(int i=n; i>=pos; i--){
        arr[i] = arr[i-1];
    }

    arr[pos+1] = key;
}

void insertAtEnd(int arr[], int n, int key){
    arr[n] = key;
}
int main(){
    int n;
    cin>>n;

    int key;
    cout<<"Enter the element you want to add = ";
    cin>>key;

    int pos;
    cout<<"Enter the position = ";
    cin>>pos;
    

    int arr[n+3];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    printArray(arr,n);
    insertAtBeg(arr,n,key);
    printArray(arr,n+1);

    // insertAtMid(arr,n,key,pos);
    // printArray(arr,n+2);

    // insertAtEnd(arr,n,key);
    // printArray(arr,n+3);


return 0;
}