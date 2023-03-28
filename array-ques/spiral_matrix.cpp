#include<bits/stdc++.h>
using namespace std;

void printArray(vector<vector<int>>&matrix, int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void SpiralMatrix(vector<vector<int>>&matrix, int r, int c){
    int top = 0, left = 0, bottom = r-1, right = c-1;
    while(top <= bottom && left <= right){
        for(int i=left; i<=right; i++)
            cout<<matrix[top][i]<<" ";
            
        top++;
        for(int i=top; i<=bottom; i++)
            cout<<matrix[i][right]<<" ";
            
        right--;

        if(top <= bottom){
            for(int j=right; j>=left; j--)
                cout<<matrix[bottom][j]<<" ";
                
            bottom--;
        }

        if(left <= right){
            for(int i=bottom; i>=top; i--)
                cout<<matrix[i][left]<<" ";
            left++;
        }
    }
}

int main(){
    vector<vector<int>>mat = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}};
    int r = 4, c = 4;
    cout<<"Before Spiralling the array : "<<endl;
    printArray(mat,r,c);
    cout<<"After Spiralling the array : "<<endl;
    SpiralMatrix(mat,r,c);
    return 0;
}