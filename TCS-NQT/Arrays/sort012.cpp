#include<bits/stdc++.h>
using namespace std;

void printArray(int n, int arr[]){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void dutchFlowAlgo(int n, int arr[]){
    int lo = 0;
    int mid = 0;
    int hi = n-1;

    while(mid <= hi){
        if(arr[mid] == 0){
            swap(arr[mid], arr[lo]);
            mid++;
            lo++;
        }

        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid],arr[hi]);
            hi--;
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    dutchFlowAlgo(n,arr);
    printArray(n,arr);

    int cntZero = 0, cntOne = 0, cntTwo = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            cntZero++;
        }
        else if(arr[i] == 1){
            cntOne++;
        }
        else if(arr[i] == 2){
            cntTwo++;
        }
    }

    int i=0;
    while(cntZero > 0){
        arr[i] = 0;
        cntZero--;
        i++;
    }

    while(cntOne > 0){
        arr[i] = 1;
        cntOne--;
        i++;
    }

    while(cntTwo > 0){
        arr[i] = 2;
        cntTwo--;
        i++;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}