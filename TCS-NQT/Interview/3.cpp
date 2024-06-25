#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Approach1(int arr[], int n){
    int cnt=0;

    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            cnt++;
        }
    }

    for(int i=0; i<cnt; i++){
        arr[i] = 0;
    }
    for(int i=cnt; i<n; i++){
        arr[i] = 1;
    }
}

void Approach2(int arr[], int n){
    int type0 = 0;
    int type1 = n-1;

    while(type0 < type1){
        if(arr[type0] == 1){
            if(arr[type1] != 1){
                swap(arr[type0], arr[type1]);
            }
            type1--;
        }
        else{
            type0++;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of an array = ";
    cin>>n;

    int arr[n];
    cout<<"Enter the element in 0's and 1's only =";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printArray(arr,n);
    //Approach1(arr,n);
    Approach2(arr,n);
    printArray(arr,n);

    return 0;
}