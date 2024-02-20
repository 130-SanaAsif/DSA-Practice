#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    int arr[n];

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    printArray(arr, n);
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum+arr[i];
    }
    cout<<"Sum of array element = "<<sum<<endl;

return 0;
}