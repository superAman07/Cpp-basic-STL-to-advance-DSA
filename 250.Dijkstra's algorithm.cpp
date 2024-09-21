#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

typedef pair<int, int> pii;
vector<int> dijkstra(int V, vector<vector<pii>>& graph, int source) { 
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<int> dist(V, INT_MAX); 
    dist[source] = 0;
    pq.push({0, source});

    while (!pq.empty()) {
        int currDist = pq.top().first; 
        int u = pq.top().second;       
        pq.pop();
 
        for (auto neighbor : graph[u]) {
            int weight = neighbor.first;  
            int v = neighbor.second;     
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    return dist; 
}

int main() {
    int V = 5; 
    vector<vector<pii>> graph(V);
 
    graph[0].push_back({2, 1});
    graph[0].push_back({6, 3});
    graph[1].push_back({2, 0});
    graph[1].push_back({3, 2});
    graph[1].push_back({8, 3});
    graph[1].push_back({5, 4});
    graph[2].push_back({3, 1});
    graph[2].push_back({7, 4});
    graph[3].push_back({6, 0});
    graph[3].push_back({8, 1});
    graph[3].push_back({9, 4});
    graph[4].push_back({5, 1});
    graph[4].push_back({7, 2});
    graph[4].push_back({9, 3});

    int source = 0;  
    vector<int> distances = dijkstra(V, graph, source);
 
    cout << "Shortest distances from node " << source << " to all other nodes:" << endl;
    for (int i = 0; i < V; ++i) {
        cout << "Node " << i << " : " << distances[i] << endl;
    }

    return 0;
}
