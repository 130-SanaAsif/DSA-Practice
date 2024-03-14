#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int>arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
}

int findDuplicate(int n, vector<int>&arr){
    int i = 0;
    for(int j=0; j<n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}

int main(){
    int n;
    vector<int>arr(n);
    cout<<"Enter the size of an array = ";
    cin>>n;

    cout<<"Enter elements of an array = ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    printArray(arr,n);
    int res = findDuplicate(n,arr);
    printArray(arr,res);
    
return 0;
}