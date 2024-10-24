//Efficient solution using Disjoint Set DS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int src, dest, wt;
    Edge(int s, int d, int w) {
        src = s;
        dest = d;
        wt = w;
    }
};

vector<int> parent;
vector<int> ranks;

int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

void Union(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);
    if (rootX != rootY) {
        if (ranks[rootX] < ranks[rootY]) {
            parent[rootX] = rootY;
        } else if (ranks[rootX] > ranks[rootY]) {
            parent[rootY] = rootX;
        } else {
            parent[rootY] = rootX;
            ranks[rootX]++;
        }
    }
}

bool myCmp(Edge e1, Edge e2) {
    return e1.wt < e2.wt;
}

int kruskal(vector<Edge> &arr, int V) {
    parent.resize(V);
    ranks.resize(V, 0);
    for (int i = 0; i < V; i++) {
        parent[i] = i;
    }

    sort(arr.begin(), arr.end(), myCmp);

    int res = 0;
    int edgesUsed = 0;

    for (int i = 0; i < arr.size() && edgesUsed < V - 1; i++) {
        Edge e = arr[i];
        int x = find(e.src);
        int y = find(e.dest);
        if (x != y) {
            res += e.wt;
            Union(x, y);
            edgesUsed++;
        }
    }

    return res;
}

int main() {
    vector<Edge> arr;
    arr.push_back(Edge(0, 1, 10));
    arr.push_back(Edge(0, 2, 8));
    arr.push_back(Edge(1, 2, 5));
    arr.push_back(Edge(1, 3, 3));
    arr.push_back(Edge(2, 3, 4));
    arr.push_back(Edge(3, 4, 15));
    arr.push_back(Edge(2, 4, 12));

    int V = 5;
    cout << "Minimum Cost of Spanning Tree: " << kruskal(arr, V) << endl;

    return 0;
}
