#include<bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>&arr){
        int maxA = 0;
        int width, height;
        int n = arr.size();
        stack<int>s;
        for(int i=0; i<=n; i++){
            while(!s.empty() && (i == n || arr[s.top()] >= arr[i])){
                height = arr[s.top()];
                s.pop();
                if(s.empty())
                    width = i;
                else
                    width = i-s.top()-1;
                maxA = max(maxA, width*height);
            }
            s.push(i);
        }
        return maxA;
    }

int maxRectangle(vector<vector<int>>&mat){
    int n = mat.size();
    int m = mat[0].size();

    int area = largestRectangleArea(mat[0]);

    for(int i=1; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j] != 0){
                mat[i][j] = mat[i][j] + mat[i-1][j];
            }
            else{
                mat[i][j] = 0;
            }
        }
        area = max(area, largestRectangleArea(mat[i]));
    }
    return area;
}

int main(){
    vector<vector<int>>arr = {{0,1,1,1,1,0},
                            {1,1,1,1,0,1},
                            {1,1,0,1,1,1},
                            {1,1,1,1,1,0}};
    int res = maxRectangle(arr);
    cout<<"The maximal rectangle is = "<<res;
    return 0;
}