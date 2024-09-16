//O(E+V) time complexity
#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
void addEdge(vector<int>adj[],int v,int u){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void SortestPath(vector<int>adj[],int v,int s){
    queue<int> q;
    bool visited[v];
    int dist[v];
    for (int i = 0; i < v; i++) {
        visited[i] = false;
        dist[i] = INT_MAX;
    }
    dist[s]=0;
    visited[s]=true;
    q.push(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto it:adj[u]){
            if(visited[it]==false){
                dist[it]=dist[u]+1;
                visited[it]=true;
                q.push(it);
            }
        }
    }
    for(int i=0;i<v;i++){
        cout<<dist[i]<<" ";
    }
}
void display(vector<int>adj[],int v){
    for(int i=0;i<v;i++){
        for(auto it:adj[i]){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int v=4;
    int s=0;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    // addEdge(adj,¼,1);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);
    display(adj,v);
    cout<<"Sortest path from sourse" <<s<<": ";
    SortestPath(adj,v,s);
    return 0;
}
