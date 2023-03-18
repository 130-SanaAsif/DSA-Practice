#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[100][100],int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[100][100], brr[100][100], sum[100][100];
    int n, m;
    cout<<"Enter the row of matrix - "<<endl;
    cin>>n;
    cout<<"Enter the column of matrix - "<<endl;
    cin>>m;

    cout<<"Enter the element of matrix 1 : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"Element "<<i+1<<j+1<<" - ";
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the element of matrix 2 : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"Element "<<i+1<<j+1<<" - ";
            cin>>brr[i][j];
        }
    }

    cout<<"Matrix 1 : \n";
    printArray(arr,n,m);
    cout<<"Matrix 2 : \n";
    printArray(brr,n,m);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum[i][j] = arr[i][j] + brr[i][j];
        }
    }

    cout<<"Resultant Matrix after adding : \n";
    printArray(sum,n,m);

    return 0;
}