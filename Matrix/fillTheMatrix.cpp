#include<bits/stdc++.h>
using namespace std;

int minIteration(int N, int M, int x, int y){
    vector<vector<int>>arr(N,vector<int>(M,0));
    arr[x-1][y-1] = 1;
    queue<pair<int,pair<int,int>>>q;
    q.push({0,{x-1,y-1}});
    int ans = 0;
    while(q.size()){
        auto temp = q.front();
        q.pop();
        ans = temp.first;
        x = temp.second.first;
        y = temp.second.second;
        if(x+1 < N and arr[x+1][y] == 0){
            arr[x+1][y] = 1;
            q.push({ans+1,{x+1,y}});
        } 
        if(x-1 >= 0 and arr[x-1][y] == 0){
            arr[x-1][y] = 1;
            q.push({ans+1,{x-1,y}});
        }
        if(y+1 < M and arr[x][y+1] == 0){
            arr[x][y+1] = 1;
            q.push({ans+1,{x,y+1}});
        }
        if(y-1 >= 0 and arr[x][y-1] == 0){
            arr[x][y-1] = 1;
            q.push({ans+1,{x,y-1}});
        }
    }
    return ans;
}

int main(){
    //int n = 2, m = 3, x = 2, y = 3;
    int n = 1, m = 1, x = 1, y = 1;
    int res = minIteration(n,m,x,y);
    cout<<res;
    return 0;
}