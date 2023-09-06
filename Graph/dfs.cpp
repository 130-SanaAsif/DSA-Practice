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
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }

    void dfs(int node, vector<int>adj[], int vis[],  vector<int>&ls){
        vis[node] = 1;
        ls.push_back(node);

        //Traverse the adjacency list.
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis,ls);
            }
        }
    }

    vector<int>dfsSearch(int n, vector<int>adj[]){
        int vis[n] = {0};
        int start = 0;
        vector<int>ls;
        dfs(start,adj,vis,ls);
        return ls;
    }
};

int main(){
    int n,m;
    cout<<"Enter the number of nodes :"<<endl;
    cin>>n;

    cout<<"Enter the number of edges :"<<endl;
    cin>>m;
    vector<int>adj[n];
    graph g;

    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;

        g.addEdge(u,v,0);
    }
    cout<<"Adjacency list : "<<endl;
    g.printAdj();
  
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }

    cout<<"DFS traversal of graph : "<<endl;
    vector<int>ans = g.dfsSearch(n,adj);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}