#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void alterNegPos(int arr[], int n){
    vector<int>neg, pos;
    for(int i=0; i<n; i++){
        if(arr[i] < 0)
            neg.push_back(arr[i]);
        else
            pos.push_back(arr[i]);
    }

    int i=0,j=0,k=0;
    while(i<pos.size() && j<neg.size()){
        arr[k++] = pos[j++];
        arr[k++] = neg[i++];
    }
    while(j < pos.size()){
        arr[k++] = pos[j++];
    }
    while(i < neg.size()){
        arr[k++] = neg[i++];
    }
}

int main(){
    int arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before:"<<endl;
    printArray(arr,n);
    cout<<"After:"<<endl;
    alterNegPos(arr,n);
    printArray(arr,n);
    return 0;
}