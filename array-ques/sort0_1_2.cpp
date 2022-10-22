#include<iostream>
#include<algorithm>
using namespace std;

void PrintArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Sort01(int arr[], int n){
    int low = 0;
    int high = n-1;
    int mid = 0;
    while(mid <=high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main(){
    int arr[] = {0,1,2,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting :"<<endl;
    PrintArray(arr, n);
    cout<<"After sorting :"<<endl;
    Sort01(arr, n);
    PrintArray(arr, n);
    return 0;
}