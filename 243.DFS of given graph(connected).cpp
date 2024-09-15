//O(E+V) time complexity
#include<iostream>
#include<vector>
using namespace std;
void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void DFS(vector<int>adj[],int s,bool checker[]){
    checker[s]=true;
    cout<<s;
    for(auto it:adj[s]){
        if(checker[it]==false){
            DFS(adj,it,checker);
        }
    }
}
void dfsOfGraph(vector<int> adj[],int V){   
    bool checker[V];
    for(int i=0;i<V;i++){
        checker[i]=false;
    }
    DFS(adj,0,checker); 
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
    vector<int>adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,1,2);
    addEdge(adj,2,3);
    addEdge(adj,2,4);
    addEdge(adj,4,3);
    cout<<"Before: ";
    display(adj,v);
    cout<<"DFS of given graph: ";
    dfsOfGraph(adj,v);
    return 0;
}
