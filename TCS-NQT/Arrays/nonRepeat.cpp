#include<iostream>
#include<unordered_map>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int nonRepeat(int arr[], int n){
    for(int i=0; i<n; i++){
        int j;
        for(j=0; j<n; j++){
            if(i != j && arr[i] == arr[j]){
                break;
            }
        }

        if(j == n){
            return arr[i];
        }
    }
    return 0;
}

int nonRepeatEle(int arr[], int n){
    unordered_map<int, int>mpp;

    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    for(int i=0; i<n; i++){
        if(mpp[arr[i]] == 1){
            return arr[i];
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the number of elements = ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of an array = ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printArray(arr,n);
    int res = nonRepeatEle(arr,n);
    cout<<"The repeating element in the array is = "<<res<<endl;

    int ans = nonRepeatEle(arr,n);
    cout<<"The repeating element in the array is = "<<ans<<endl;

    return 0;
}