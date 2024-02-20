#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse(int arr[], int n){
    int l = 0;
    int h = n-1;

    while(l < h){
        
        swap(arr[h], arr[l]);
        l++;
        h--;
        
    }
}
int main(){
    int n;
    int arr[n];
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    printArray(arr, n);
    reverse(arr, n);
    printArray(arr, n);
    
return 0;
}