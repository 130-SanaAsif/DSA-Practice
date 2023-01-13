#include<bits/stdc++.h>
using namespace std;

void printArray(vector<vector<int>>&mat){
    for(int i = 0; i<mat.size(); i++){
        for(int j=0; j<mat[0].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void RotateImage(vector<vector<int>>&mat){
    int n=mat.size();
    //Transposing the matrix.
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }

    //Reversing each row of matrix.
    for(int i=0; i<n; i++){
        reverse(mat[i].begin(), mat[i].end());
    }
}

int main(){
    vector<vector<int>>arr = {{1,2,3},
                            {4,5,6},
                            {7,8,9}};
    printArray(arr);
    RotateImage(arr);
    printArray(arr);
    return 0;
}