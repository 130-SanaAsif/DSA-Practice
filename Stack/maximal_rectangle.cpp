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
    vector<int>cur;
    cur = mat[0];
    int maxAns = largestRectangleArea(cur);

    for(int i=1; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j] == 1){
                cur[j]+=1;
            }
            else{
                cur[j] = 0;
            }
        }
        int curAns = largestRectangleArea(cur);
        maxAns = max(maxAns, curAns);
    }
    return maxAns;
}

int main(){
    vector<vector<int>>arr = {{0,1,1,1,1,0},
                            {1,1,1,1,0,1},
                            {1,1,0,1,1,1},
                            {1,1,1,1,1,0}};
    int res = maxRectangle(arr);
    cout<<res;
    return 0;
}