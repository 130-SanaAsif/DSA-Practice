#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
int LinearSearch(int arr[], int n, int fnd){
    for(int i=0; i<n; i++){
        if(arr[i]==fnd){
            return i;
        }
    }
    return -1;
}
void InsertionSort(int arr[], int n){
    int key, j;
    for(int i=1; i<=n-1; i++){
        key = arr[i];
        j = i-1;
        while(j >=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main(){
    int arr[] = {7, 10, 2, 9, 13, 14, 5, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int fnd;

    cout<<"Before Sorting..."<<"\n";
    display(arr, n);
    cout<<"After Sorting...\n";
    InsertionSort(arr, n);
    display(arr, n);

    cout<<"Enter the element to be found: \n";
    cin>>fnd;

    int res = LinearSearch(arr, n, fnd);
    printf("Found in index no. %d ", res);
    return 0;
}