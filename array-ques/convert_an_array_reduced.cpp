#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void ConvertArray(int arr[], int n){
    vector<pair<int,int>>vec;
    for(int i=0; i<n; i++){
        vec.push_back(make_pair(arr[i], i));
    }
    sort(vec.begin(), vec.end());
    for(int i=0; i<n; i++){
        arr[vec[i].second] = i;
    }
}

int main(){
    int arr[] = {5,10,40,30,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    ConvertArray(arr,n);
    printArray(arr,n);
    return 0;
}