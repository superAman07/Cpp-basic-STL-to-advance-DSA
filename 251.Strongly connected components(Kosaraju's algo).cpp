#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void AddEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
}
void DFSRec(vector<int> adj[], int s, vector<bool> &visited, stack<int> &st) {
    visited[s] = true;
    for (auto it : adj[s]) {
        if (!visited[it]) {
            DFSRec(adj, it, visited, st);
        }
    }
    st.push(s); 
}
void DFSRecTranspose(vector<int> adj[], int s, vector<bool> &visited, vector<int> &component) {
    visited[s] = true;
    component.push_back(s);
    for (auto it : adj[s]) {
        if (!visited[it]) {
            DFSRecTranspose(adj, it, visited, component);
        }
    }
}
vector<vector<int>> StronglyConnectedComponents(vector<int> adj[], int v) {
    stack<int> st;
    vector<bool> visited(v, false);

    for (int i = 0; i < v; i++) {
        if (!visited[i]) {
            DFSRec(adj, i, visited, st);
        }
    }
    vector<int> transposed[v];
    for (int i = 0; i < v; i++) {
        for (auto it : adj[i]) {
            transposed[it].push_back(i); 
        }
    }

    vector<vector<int>> sccs;
    visited.assign(v, false);  

    while (!st.empty()) {
        int node = st.top();
        st.pop();
        if (!visited[node]) {
            vector<int> component;
            DFSRecTranspose(transposed, node, visited, component);
            sccs.push_back(component); 
        }
    }
    return sccs;
}

int main() {
    int v = 5;
    vector<int> adj[5];
    AddEdge(adj, 0, 2);
    AddEdge(adj, 2, 1);
    AddEdge(adj, 1, 0);
    AddEdge(adj, 2, 3);
    AddEdge(adj, 3, 4);
    AddEdge(adj, 4, 3);
    vector<vector<int>>sccs = StronglyConnectedComponents(adj, v);
    cout << "Strongly Connected Components:\n";
    for (const auto &component:sccs){
        for (int it : component){
            cout << it << " ";
        }
        cout << "\n";
    }
    return 0;
}
