#include<bits/stdc++.h>
using namespace std;

class graph{
public:
    unordered_map<int,list<int>> adj;

    void addEdge(int u, int v, bool direction){
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
    }

    void printAdj(){
        for(auto i : adj){
            cout<<i.first<<"->";
            for(auto j : i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }

    vector<int> bfsOfGraph(int n, vector<int> adj[]){
        int vis[n] = {0};
        vis[0] = 1;
        queue<int>q;
        q.push(0);
        vector<int>bfs;

        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);

            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }

};

int main(){
    int n,m;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;

    cout<<"Enter the number of edges"<<endl;
    cin>>m;

    vector<int>adj[n];
    graph g;
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    cout<<"Adjacency of graph"<<endl;
    g.printAdj();

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    cout<<"BFS of Graph"<<endl;
    vector<int>ans = g.bfsOfGraph(n,adj);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}