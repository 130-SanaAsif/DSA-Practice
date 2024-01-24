#include<bits/stdc++.h>
using namespace std;

//Brute Force.
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

//Better Approach.
void setMatrix2(vector<vector<int>>&mat){
    int n = mat.size();
    int m = mat[0].size();

    int row[n] = {0};
    int col[m] = {0};

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(row[i] == 1 || col[j] == 1){
                mat[i][j] = 0;
            }
        }
    }
}

//Optimal Approach.
void setMatrix3(vector<vector<int>>&mat){
    // //int row[n] = {0}; -> matrix[...][0]
    // //int col[m] = {0}; -> matrix[0][...]

    int n = mat.size();
    int m = mat[0].size();
    // int col0 = 1;
    // // step 1: Traverse the matrix and
    // // mark 1st row & col accordingly:
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         if(mat[i][j] == 0){
    //             //mark the ith row.
    //             mat[i][0] = 0;
    //         }
            
    //         //mark the jth column.
    //         if(j != 0){
    //             mat[0][j] = 0;
    //         }
    //         else{
    //             col0 = 0;
    //         }
    //     }
    // }

    // // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
    // for(int i=1; i<n; i++){
    //     for(int j=1; j<m; j++){
    //         if(mat[i][j] != 0){
    //             //check for column and row.
    //             if(mat[i][0] == 0 || mat[0][j] == 0){
    //                 mat[i][j] = 0;
    //             }
    //         }
    //     }
    // }

    // if(mat[0][0] == 0){
    //     for(int j=0; j<m; j++){
    //         mat[0][j] = 0;
    //     }
    // }
    // if(col0 == 0){
    //     for(int i=0; i<n; i++){
    //         mat[i][0] = 0;
    //     }
    // }
    int col0 = 1;
    // step 1: Traverse the matrix and
    // mark 1st row & col accordingly:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == 0) {
                // mark i-th row:
                mat[i][0] = 0;

                // mark j-th column:
                if (j != 0)
                    mat[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (mat[i][j] != 0) {
                // check for col & row:
                if (mat[i][0] == 0 || mat[0][j] == 0) {
                    mat[i][j] = 0;
                }
            }
        }
    }

    //step 3: Finally mark the 1st col & then 1st row:
    if (mat[0][0] == 0) {
        for (int j = 0; j < m; j++) {
            mat[0][j] = 0;
        }
    }
    if (col0 == 0) {
        for (int i = 0; i < n; i++) {
            mat[i][0] = 0;
        }
    }

}

int main(){
vector<vector<int>>mat = {{1,1,1,1},
                          {1,0,0,1},
                          {1,1,0,1},
                          {1,1,1,1}};

//setMatrix(mat);
//setMatrix2(mat);
setMatrix3(mat);
for(int i=0; i<mat.size(); i++){
    for(int j=0; j<mat[0].size(); j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}