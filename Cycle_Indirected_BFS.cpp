#include<bits/stdc++.h>
using namespace std;
bool detect(vector<int>adj[], int vertex, int node, int parent){
    vector<bool>visited(vertex, false);
    queue<pair<int, int>>q;
    q.push(make_pair(node, parent));
    visited[node]=true;
    while(!q.empty()){
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(int j=0;j<adj[node].size();j++){
            if(adj[node][j]==parent){
                continue;
            }
            else if(visited[adj[node][j]]){
                return 1;
            }
            else{
                q.push(make_pair(adj[node][j], node));
                visited[adj[node][j]]=true;
            }
        }
    }
    return 0;
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
    cout<<detect(adj, vertex, 0, -1);
    return 0;
}