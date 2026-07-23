#include<bits/stdc++.h>
using namespace std;
bool DFS(vector<int>adj[], vector<bool>&visited, int node){
    visited[node]=true;
    for(int j=0;j<adj[node].size();j++){
        if(adj[node][j]==true){
            return true;
        }
        else{
            if(DFS(adj, visited, adj[node][j])){
                return true;
            }
        }
    }
    visited[node]=false;
    return 0;
}
void detect(vector<int>adj[], int vertex, int node){
    vector<bool>visited(vertex, false);
    cout<<DFS(adj, visited, node);
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
    }
    detect(adj, vertex, 0);
    return 0;
}