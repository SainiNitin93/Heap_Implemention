#include<bits/stdc++.h>
using namespace std;
bool DFS(vector<int>adj[], vector<bool>&visited, int node, int parent){
    visited[node]=true;
    for(int j=0;j<adj[node].size();j++){
        if(adj[node][j]==parent){
            continue;
        }
        else if(adj[node][j]==true){
            return 1;
        }
        else{
            if((adj, visited, adj[node][j], node)){
                return 1;
            }
        }
    }
    return 0;
}

void detect(vector<int>adj[], int vertex, int node, int parent){
    vector<bool>visited(vertex, 0);
    cout<<DFS(adj, visited, node, parent);
}
int main(){
    int vertex, edge;
    cout<<"Enter the vertex and edge! ";
    cin>>vertex>>edge;
    vector<int>adj[vertex];
    int u,v,i;
    for(i=1;i<=edge;i++){
        cout<<"Enter the edge from to! ";
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    detect(adj, vertex, 0, -1);
    return 0;
}