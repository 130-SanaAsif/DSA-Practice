#include<iostream>
#define n 4
using namespace std;

void swapDiagonal(int arr[n][n]){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    //for printing the element.
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void printArray(int arr[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int arr[n][n] = { { 2, 3, 5, 6 },
                    { 4, 5, 7, 9 },
                    { 8, 6, 4, 9 },
                    { 1, 3, 5, 6 } };
    
    cout<<"Before Swapping : "<<endl;
    printArray(arr);
    cout<<"After Swapping : "<<endl;
    swapDiagonal(arr);
    
    return 0;
}