#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void addEdge(vector<int>adj[],int v,int u){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void BFS(vector<int>adj[],int v,int s){
    bool visited[v+1];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    queue<int>q;
    visited[s]=true; // source ko true mark kia as visited
    q.push(s);  //phir source s ko push kia queue me
    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout<<u<<' ';
        for(int v:adj[u]){
            if(visited[v]==false){
                visited[v]=true;
                q.push(v);
            }
        }
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
    int v=5;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,1,2);
    addEdge(adj,2,3);
    addEdge(adj,2,4);
    addEdge(adj,4,3);
    cout<<"Original graph: ";
    display(adj,v);
    cout<<"BFS traversal: ";
    BFS(adj,v,0);   // 0 1 2 3 4
    return 0;
}
