#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&a, vector<int>&b){
    
    int n = a.size();
    int m = b.size();
    int i = n-1;
    int j = m-1;
    int k = n+m-1;
    while(i >= 0 && j >= 0){
        if(a[i] > b[j]){
            a[k] = a[i];
            i--;
            k--;
        }
        else{
            a[k] = b[j];
            j--;
            k--;
        }
    }
    while(j>=0){
        a[k] = b[j];
        j--;
        k--;
    }
}

void printArray(vector<int>&arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

