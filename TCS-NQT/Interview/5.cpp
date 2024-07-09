#include<iostream>
using namespace std;

void lowerTriangle(int arr[3][3], int r, int c){
    
    int i,j;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(i<j){
                cout<<"0"<<" ";
            }
            else{
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

void upperTriangle(int arr[3][3], int r, int c){
    int i,j;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(i > j){
                cout<<"0"<<" ";
            }
            else{
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

void printMatrix(int arr[3][3], int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int r = 3, c = 3;
    // cout<<"Enter the row = ";
    // cin>>r;
    // cout<<"Enter the column = ";
    // cin>>c;

    int arr[3][3] = {{1,3,9},{8,7,1},{9,8,5}};
    // cout<<"Enter the elements of matrix = ";
    // for(int i=0; i<r; i++){
    //     for(int j=0; j<c; j++){
    //         cin>>arr[i][j];
    //     }
    //     cout<<endl;
    // }

    cout<<"Lower Triangle : "<<endl;
    lowerTriangle(arr,r,c);
    
    cout<<"Upper Traingle : "<<endl;
    upperTriangle(arr,r,c);

    return 0;
}