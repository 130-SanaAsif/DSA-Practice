#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int dx[8] = {-2,-2,2,2,-1,-1,1,1};
    int dy[8] = {-1,1,-1,1,-2,2,-2,2};
    int KnightInGeekland(int sx, int sy, vector<vector<int>>&arr){
        int n = arr.size();
        int m = arr[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,0));
        queue<pair<int,int>>q;
        q.push({sx,sy});
        vis[sx][sy] = true;

        vector<int> points(1e3+1,0);
        int steps = 0;
        while(!q.empty()){
            int qsize = q.size();
            while(qsize--){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                points[steps] += arr[x][y];
                for(int k=0; k<8; k++){
                    int curx = x+dx[k];
                    int cury = y+dy[k];

                    if(curx<0 || cury<0 || curx>=n || cury>=m || vis[curx][cury])
                        continue;
                        vis[curx][cury] = 1;
                        q.push({curx,cury});
                }
            }
            steps++;
        }
        int ans,maxi=-1e9;
        for(int i=0; i<=1e3; i++){
            int cur =i;
            int totalpoint = 0;
            while(cur<=1e3){
                if(points[cur] == 0)break;
                totalpoint+=points[cur];
                cur+=points[cur];
            }
            points[i] = totalpoint;
            if(points[i] > maxi){
                maxi = points[i];
                ans = i;
            }
        }
        return ans;
    }
};

int main(){
    vector<vector<int>>arr = {{0,0,0,2,0,2,0,2,0,0},
{0,0,2,0,2,0,2,0,2,0},
{0,2,0,0,1,2,0,0,0,2},
{0,0,2,0,2,0,2,0,2,0},
{0,2,0,2,0,0,0,2,0,2},
{0,0,2,0,2,0,2,0,2,0},
{0,2,0,0,0,2,0,0,0,2},
{0,0,2,0,2,0,2,0,2,0},
{0,0,0,2,0,2,0,2,0,0}};
    int x = 4, y=5;
    Solution s;
    int res = s.KnightInGeekland(x,y,arr);
    cout<<res;
    return 0;
}