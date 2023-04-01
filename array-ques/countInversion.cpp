#include<bits/stdc++.h>
using namespace std;

//Brute-Force Approach.
//TC - O(n^2).
//SC - O(1).
//int CountInversion(vector<int>&arr){
//    int cnt = 0;
//    for(int i=0; i<arr.size();i++){
//        for(int j=0; j<arr.size(); j++){
//            if(i < j && arr[i] > arr[j]){
//                cnt++;
//            }
//        }
//    }
//    return cnt;
//}


int merge(int arr[], int temp[], int left, int right, int mid){
    int cnt = 0;
    int i = left;
    int j = mid;
    int k = right;

    while((i <= mid-1) && (j <= right)){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            cnt = cnt + (mid-i);
        }
    }
    while(i <= mid-1){
        temp[k++] = arr[i++]; 
    }
    while(j <= right){
        temp[k++] = arr[j++];
    }
    for(i = left; i<=right; i++){
        arr[i] = temp[i];
    }
    return cnt;
}

int mergeSort(int arr[], int temp[], int left, int right){
    int mid,cnt=0;
    while(left < right){
        mid = (left+right)/2;
        cnt += mergeSort(arr,temp,left,right);
        cnt += mergeSort(arr,temp,mid+1,right);
        cnt += merge(arr,temp,left,right,mid+1);
    }
    return cnt;
}
int main(){
    int arr[] = {5,3,2,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    int res = mergeSort(arr,temp,0,n-1);
    cout<<res<<endl;
    return 0;
}