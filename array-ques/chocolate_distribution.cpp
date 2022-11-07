#include<iostream>
#include<algorithm>
using namespace std;

int DistributeChocolates(int arr[], int n, int m){
    int min = INT_MAX;
    if(n==0 || m==0){
        return 0;
    }
    if(n<m){
        return -1;
    }
    sort(arr,arr+n);
    for(int i =0; i+m-1<n; i++){
        int diff  = arr[i+m-1] - arr[i];
        if(diff<min){
            min = diff;
        }
    }
    return min;
}
int main(){
    int arr[] = {12, 4,  7,  9,  2,  23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int m;
    cout<<"Enter the number of student: ";
    cin>>m;
    int res = DistributeChocolates(arr,n,m);
    cout<<"The difference is "<<res;
    return 0;
}