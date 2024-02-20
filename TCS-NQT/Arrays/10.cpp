#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void medianArray(int arr[], int n){
    sort(arr, arr+n);
    
    double median;
    if(n%2 == 0){
        int mid = n/2; 
        int mid1 = (n/2)-1;
        cout<<"Median of an array = "<< (double)(arr[mid] + arr[mid1])/2;
    }
    else{
        cout<<"Median of an array = "<<arr[n/2];
    }
}
int main(){
    int n;
    int arr[n];

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printArray(arr,n);
    medianArray(arr,n);
return 0;
}