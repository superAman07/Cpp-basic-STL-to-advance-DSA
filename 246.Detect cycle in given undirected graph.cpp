#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
void addEdge(vector<int>adj[],int v,int u){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
bool DFSRec(vector<int>adj[],int s,bool visited[],int parent){
    visited[s]=true;
    for(auto u:adj[s]){
        if(visited[u]==false){
            if(DFSRec(adj,u,visited,s)==true)return true;
        }else if(u!=parent)return true;
    }
    return false;
}
bool DFS(vector<int>adj[],int v){
    bool visited[v]={false};
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            if(DFSRec(adj,i,visited,-1)==true)return true;
        }
    }
    return false;
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
    cout<<"Cyclic is present? :";
    cout<<DFS(adj,v);
    return 0;
}
