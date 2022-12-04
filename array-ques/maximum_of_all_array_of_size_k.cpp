#include<iostream>
#include<deque>
using namespace std;

void MaximumSize(int arr[], int n, int k){
    deque<int>dq(k);
    for(int i=0; i<k; i++){
        while ((!dq.empty()) && arr[i] >= arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    for(int i = k; i<n; i++){
        cout<<arr[dq.front()]<<" ";
        while((!dq.empty()) && dq.front() <= i - k)
            dq.pop_front();
         while ((!dq.empty()) && arr[i] >= arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);   
    }
    cout<<arr[dq.front()];
}

int main(){
    int arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    MaximumSize(arr,n,k);
    return 0;
}