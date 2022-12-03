#include<iostream>
#include<algorithm>
using namespace std;
//Time complexity - O(n).
//Space complexity - O(1).

long long Trapping_rainwater(int arr[], int n){
    int left[n];
    int right[n];

    int leftmax = arr[0];
    for(int i=0; i<n; i++){
        leftmax = max(leftmax, arr[i]);
        left[i] = leftmax;
    }

    int rightmax = arr[n-1];
    for(int i=n-1; i>=0; i--){
        rightmax = max(rightmax, arr[i]);

        right[i] = rightmax;
    }
    long long sum = 0;
    for(int i=0; i<n; i++){
        sum += min(left[i], right[i]) - arr[i];
    }
    return sum;
}

int main(){
    int arr[] = {7,4,0,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = Trapping_rainwater(arr,n);
    cout<<res;
    return 0;
}