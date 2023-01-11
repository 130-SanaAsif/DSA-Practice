#include<bits/stdc++.h>
using namespace std;

void printArray(vector<vector<int>>&matrix, int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void Rotate90(vector<vector<int>>&matrix, int n){
    //REVERSE THE MAint ind = n - 1
     for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(),matrix[i].end());
  }
    //SWAP arr[i][j] with arr[j][i]
    for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
}

int main(){
    vector<vector<int>>arr = {{1, 2, 3},
              {4, 5, 6},
              {7, 8, 9}};

    int n = 3;
    int m = 3;
    printArray(arr,n,m);
    cout<<"After Rotating:"<<endl;
    Rotate90(arr,n);
    printArray(arr,n,m);
}
