#include<bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>>&mat, int m, int i){
    for(int j=0; j<m; j++){
        if(mat[i][j] != 0){
            mat[i][j] = -1;
        }
    }
}

void markCol(vector<vector<int>>&mat, int n, int j){
    for(int i=0; i<n; i++){
        if(mat[i][j] != 0){
            mat[i][j] = -1;
        }
    }
}

void setMatrix(vector<vector<int>>&mat){
    int n = mat.size();
    int m = mat[0].size();

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j] == 0){
                markRow(mat, m, i);
                markCol(mat, n, i);
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(mat[i][j] == -1){
                mat[i][j] = 0;
            }
        }
    }
}

int main(){
vector<vector<int>>mat = {{1,1,1,1},
                          {1,0,0,1},
                          {1,1,0,1},
                          {1,1,1,1}};

setMatrix(mat);
for(int i=0; i<mat.size(); i++){
    for(int j=0; j<mat[0].size(); j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}