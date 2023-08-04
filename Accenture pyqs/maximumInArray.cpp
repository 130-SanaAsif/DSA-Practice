#include<bits/stdc++.h>
using namespace std;


void maxInArray(int arr[], int len){
    //int max = arr[0];
    int max = INT_MIN;
    int pos = 0;
    for(int i=0; i<len; i++){
        if(max < arr[i]){
            max = arr[i];
            pos = i;
        }
    }
    cout<<max<<endl;
    cout<<pos;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Array"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    maxInArray(arr,n);

    return 0;
}