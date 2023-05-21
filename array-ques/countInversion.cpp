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


int merge(int arr[],int temp[],int left,int mid,int right)
{
    int inv_count=0;
    int i = left;
    int j = mid;
    int k = left;
    int s = right;
    
    while((i <= mid-1) && (j <= right)){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
           
        }
        else
        {
            temp[k++] = arr[j++];
            
            inv_count = inv_count + (mid - i);
        }
    }

    while(i <= mid - 1)
        temp[k++] = arr[i++];
       
    while(j <= right)
        temp[k++] = arr[j++];
    for(i = left ; i <= right ; i++)
        arr[i] = temp[i];
    
    return inv_count;
}

int merge_Sort(int arr[],int temp[],int left,int right)
{
    int mid,inv_count = 0;
    if(right > left)
    {
        mid = (left + right)/2;

        inv_count += merge_Sort(arr,temp,left,mid);
        inv_count += merge_Sort(arr,temp,mid+1,right);

        inv_count += merge(arr,temp,left,mid+1,right);
    }
    return inv_count;
}
int main(){
    int arr[] = {5,3,2,4,1};
    //vector<int>arr = {5,4,3,2,1};
    int n = 5;
    int temp[n];
    int res = merge_Sort(arr,temp,0,n-1);
    //int res = CountInversion(arr);
    cout<<res<<endl;
    return 0;
}