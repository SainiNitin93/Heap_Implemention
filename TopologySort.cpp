#include<bits/stdc++.h>
using namespace std;
void DFS(vector<int>adj[], vector<bool>&visited, stack<int>&s, int node){
    visited[node]=true;
    for(int j=0;j<adj[node].size();j++){
        if(visited[adj[node][j]]){
            continue;
        }
        else{
            DFS(adj, visited, s, adj[node][j]);
        }
    }
    s.push(node);
}
vector<int>Topology(vector<int>adj[], int vertex, int node){
    vector<bool>visited(vertex, 0);
    vector<int>ans;
    stack<int>s;
    DFS(adj, visited, s, node);
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}
int main(){
    int vertex, edge;
    int u,v;
    int i,j;
    cout<<"Enter the vertex and the edge! ";
    cin>>vertex>>edge;
    vector<int>adj[vertex];
    for(i=1;i<=edge;i++){
        cout<<"From to! ";
        cin>>u>>v;
        adj[u].push_back(v);
        //adj[v].push_back(u); If we want to make a undirected graph
    }
    vector<int>ans=Topology(adj, vertex, 0);
    for(i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}