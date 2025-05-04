#include<bits/stdc++.h>
using namespace std;
int Cost(vector<pair<int, int>>adj[], int vertex){
    priority_queue< pair<int,pair<int, int>>, vector< pair<int,pair<int, int>>>, greater< pair<int, pair<int, int>>>>q;
    vector<bool>visited(vertex, 0);
    vector<int>parents(vertex);
    int cost=0;
    q.push({0, {0, -1}});
    while(!q.empty()){
        int weight=q.top().first;
        int node=q.top().second.first;
        int parent=q.top().second.second;
        q.pop();
        if(!visited[node]){
            visited[node]=true;
            cost=cost+weight;
            parents[node]=parent;
            for(int j=0;j<adj[node].size();j++){
               if(!visited[adj[node][j].first]){
                q.push({adj[node][j].second, {adj[node][j].first, node}});
               } 
            }
        }
    }
    for(int i=0;i<parents.size();i++){
        cout<<parents[i]<<" ";
    }
    cout<<endl;
    return cost;
}
int main(){
    int vertex,edge;
    int u,v,weight;
    int i;
    cout<<"Enter the vertex and edge! ";
    cin>>vertex>>edge;
    vector<pair<int, int>>adj[vertex];
    for(i=1;i<=edge;i++){
        cout<<"From to and weight! ";
        cin>>u>>v>>weight;
        adj[u].push_back(make_pair(v, weight));
        adj[v].push_back(make_pair(u, weight));
    }
    cout<<Cost(adj, vertex);
    return 0;
}