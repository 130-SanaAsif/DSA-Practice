#include<iostream>
using namespace std;
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void InsertionSort(int arr[], int n){
    int key, j;
    for(int i=1; i<=n-1; i++){
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int BinarySearch(int arr[], int n, int fnd){
    int low, mid, high;
    low=0;
    high=n-1;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==fnd){
            return mid;
        }
        if(arr[mid] < fnd){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {8, 9, 11, 18, 22, 31, 88, 98, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int fnd;

    cout<<"Before Sorting...\n";
    display(arr, n);
    cout<<"After Sorting...\n";
    InsertionSort(arr, n);
    display(arr, n);

    cout<<"Enter the element to search: "<<endl;
    cin>>fnd;

    int res = BinarySearch(arr, n, fnd);
    cout<<"Found in index no. "<<res<<endl;
    return 0;
}