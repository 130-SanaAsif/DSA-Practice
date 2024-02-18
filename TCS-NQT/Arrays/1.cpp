#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[n];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int small = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }

    cout<<"Samllest Element - "<<small;
    return 0;
}