#include<bits/stdc++.h>
using namespace std;

vector<int>bfs(int n, vector<int>adj[ ]){
    int vis[n] = {0};
    vis[0] = 1;
    queue<int>q;
    vector<int>ans;
    q.push(0);

    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for(auto &it : adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push( it);
            }
        }   
    }
    return ans;
}

int main(){
    int n, m;
    cout<<"Enter number of node : "<<endl;
    cin>>n;

    cout<<"Enter number of edges : "<<endl;
    cin>>m;

    vector<int>adj[n];
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
    }

    vector<int> ans = bfs(n,adj);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}