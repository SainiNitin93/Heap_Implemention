#include<bits/stdc++.h>
using namespace std;
vector<int>Kanh(vector<int>adj[], int vertex){
    vector<int>Indegree(vertex, 0);
    vector<int>ans;
    queue<int>q;
    int i,j;
    for(i=0;i<vertex;i++){
        for(j=0;j<adj[i].size();j++){
            Indegree[adj[i][j]]++;
        }
    }
    for(i=0;i<vertex;i++){
        if(Indegree[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int node=q.front();
        ans.push_back(node);
        q.pop();
        for(j=0;j<adj[node].size();j++){
            Indegree[adj[node][j]]--;
            if(Indegree[adj[node][j]]==0){
                q.push(adj[node][j]);
            }
        }
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
    vector<int>ans=Kanh(adj, vertex);
    for(i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}