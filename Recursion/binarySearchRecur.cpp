#include<iostream>
using namespace std;

void printArray(int arr[], int s, int e){
    
    for(int i=s; i<e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool binary(int arr[],int s, int e, int k){
    printArray(arr,s,e);
    int mid = (s+e)/2;
    cout<<"Mid is "<<arr[mid]<<endl;
    if(s > e){
        return false;
    }
    if(arr[mid] == k){
        return true;
    }
    if(mid < k){
        return binary(arr,mid+1,e,k);
    }
    else{
        return binary(arr,s,mid-1,k);
    }
}

int main(){
    int arr[] = {2,4,6,7,9,10,12,16,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 12;
    bool ans = binary(arr,0,n-1,k);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }

    return 0;
}