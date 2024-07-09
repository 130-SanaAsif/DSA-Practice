#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int lo = 0;
    int hi = n-1;
    int mid;
    while(lo<=hi){
        mid = (lo+hi)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key < arr[mid]){
            lo= mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return -1;    
}

int main(){
    int n = 6;
    int arr[n] = {2,5,7,9,2,4};
    int target = 7;

    int res = binarySearch(arr,n,target);
    cout<<"The element is present at index = "<<res;

    return 0;
}