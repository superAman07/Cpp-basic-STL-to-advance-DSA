#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
void addEdge(vector<int>adj[],int v,int u){
    adj[v].push_back(u);
}
bool DFSRec(vector<int>adj[],int s,bool visited[],bool recSt[]){
    visited[s]=true;
    recSt[s]=true;
    for(auto u:adj[s]){
        if(visited[u]==false && DFSRec(adj,u,visited,recSt))return true;
        else if(recSt[u]==true)return true;
    }
    recSt[s]=false;
    return false;
}
bool DFS(vector<int>adj[],int v){
    bool visited[v],recSt[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
        recSt[i]=false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            if(DFSRec(adj,i,visited,recSt)==true)return true;
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
    // addEdge(adj,1,2);
    addEdge(adj,2,1);
    addEdge(adj,2,3);
    // addEdge(adj,3,1);
    addEdge(adj,1,3);
    display(adj,v);
    cout<<"Cyclic is present in this directed graph? :";
    cout<<boolalpha<<DFS(adj,v);
    return 0;
}
