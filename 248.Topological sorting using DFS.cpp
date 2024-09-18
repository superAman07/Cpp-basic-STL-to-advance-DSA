#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
}

void DFS(int u, vector<bool>& visited, stack<int>& st, vector<int> adj[]) {
    visited[u] = true;
    for (auto it : adj[u]) {
        if (!visited[it]) {
            DFS(it, visited, st, adj);
        }
    }
    st.push(u);
}

void TopologicalSortingUsingDFS(vector<int> adj[], int v) {
    stack<int> st;
    vector<bool> visited(v, false);
    for (int i = 0; i < v; i++) {
        if (!visited[i]) {
            DFS(i, visited, st, adj);
        }
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}

void display(vector<int> adj[], int v) {
    for (int i = 0; i < v; i++) {
        cout << "Adjacency list of vertex " << i << ": ";
        for (auto it : adj[i]) {
            cout << it << " ";
        }
        cout << "\n";
    }
}

int main() {
    int v = 5;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 4);
    display(adj, v);
    cout << "Topological sorting using DFS: ";
    TopologicalSortingUsingDFS(adj, v);
    return 0;
}
