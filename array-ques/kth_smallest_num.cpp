#include<iostream>
#include<queue>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k){
    priority_queue<int>pq;
    for(int i=0; i<k; i++){
        pq.push(arr[i]);
    }
    for(int i=l+k; i<=r; i++){
        if(pq.top() > arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}

int main(){
    int arr[] = {3, 7, 8, 4, 2, 1, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = kthSmallest(arr, 0,n-1,4);
    cout<<"The third smallest element in the array is: "<<res;
    return 0;
}