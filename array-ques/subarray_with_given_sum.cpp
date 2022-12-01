#include<iostream>
using namespace std;

int SubArray(int arr[], int n, int  s){
    int start = 0;
    long long cursum = arr[0];

    for(int i=1; i<=n; i++){
        while(cursum > s && start < i-1){
            cursum = cursum - arr[start];
            start++;
        }
        if(cursum == s){
           cout<<start+1<<" "<<i;
           return 1;
        }
        if(i<n)
            cursum = cursum + arr[i];
    }
    cout<<"Not found";
    return {-1};
}

int main(){
    int arr[] = {1,2,3,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    long long s = 12;
    SubArray(arr,n,s);
    return 0;
}