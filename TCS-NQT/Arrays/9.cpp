#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

float avergeArr(int arr[], int n){
    float sum = 0;
    float avg = 0;
    for(int i=0; i<n; i++){
        sum = sum+arr[i];
    }
    avg = (sum)/n;
    return avg;
}
int main(){
    int n;
    int arr[n];

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printArray(arr, n);
    float res = avergeArr(arr, n);
    cout<<"Average of array = "<<res<<endl;
    return 0;
}