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
    int large = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > large){
            large = arr[i];
        }
    }

    cout<<"Largest Element = "<<large;
    return 0;
}