#include<bits/stdc++.h>
using namespace std;
void BFS(vector<int>adj[], int v, int node){
    vector<bool>visited(v, false);
    queue<int>q;
    q.push(node);
    visited[node]=true;
    while(!q.empty()){
        int node=q.front();
        cout<<node;
        q.pop();
        for(int j=0;j<adj[node].size();j++){
            if(visited[adj[node][j]]){
                continue;
            }
            else{
                q.push(adj[node][j]);
                visited[adj[node][j]]=true;
            }
        }
    }
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
    BFS(adj, vertex, 0);
    return 0;
}