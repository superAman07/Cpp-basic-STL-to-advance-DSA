#include<iostream>
#include<vector>
using namespace std;
void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void DFSRec(vector<int>adj[],int s,bool visited[]){
    visited[s]=true;
    cout<<s;  
    for(auto it:adj[s]){
        if(visited[it]==false){
            DFSRec(adj,it,visited);
        }
    }
}
// for counting connected components or counting islands
void CountingIsland(vector<int>adj[],int s,bool visited[]){
    visited[s]=true;
    for(auto it:adj[s]){
        if(visited[it]==false){
            CountingIsland(adj,it,visited);
        }
    }
}
// for counting connected components or counting islands
int CountDFS(vector<int> adj[],int v){  
    bool visited[v];
    int count=0;
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            DFSRec(adj,i,visited);
            count++; 
        }
    }
    return count;
}
void DFS(vector<int> adj[],int v){ 
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            DFSRec(adj,i,visited); 
        }
    }
}
void display(vector<int>adj[],int v){
    for(int i=0;i<v;i++){
        for(auto x:adj[i]){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int v=7;
    int s=0;
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);
    addEdge(adj,4,5);
    addEdge(adj,4,6);
    addEdge(adj,5,6);
    cout<<"Before: ";
    display(adj,v);
    cout<<"DFS of given graph: ";
    DFS(adj,v,s);
    return 0;
}
