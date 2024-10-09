// ## Credits

// This cheat sheet was created by [Mayur Nimkande](https://github.com/Mayur-nimkande-20), whose contributions are greatly appreciated.


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to represent an edge
struct Edge {
    int u, v, weight;
};

// Find function for Union-Find
int find(int node, vector<int>& parent) {
    if (parent[node] != node) {
        parent[node] = find(parent[node], parent); // Path compression
    }
    return parent[node];
}

// Union function for Union-Find
void unionNodes(int u, int v, vector<int>& parent, vector<int>& rank) {
    int rootU = find(u, parent);
    int rootV = find(v, parent);

    // Union by rank
    if (rootU != rootV) {
        if (rank[rootU] < rank[rootV]) {
            parent[rootU] = rootV;
        } else if (rank[rootU] > rank[rootV]) {
            parent[rootV] = rootU;
        } else {
            parent[rootV] = rootU;
            rank[rootU]++;
        }
    }
}

// Function to implement Kruskal's algorithm for finding Minimum Spanning Tree (MST)
int kruskal(vector<Edge>& edges, int V) {
    sort(edges.begin(), edges.end(), [](Edge a, Edge b) {
        return a.weight < b.weight; // Sort edges by weight
    });

    vector<int> parent(V), rank(V, 0);
    for (int i = 0; i < V; i++) parent[i] = i; // Initialize Union-Find

    int mstWeight = 0; // Total weight of the MST

    for (Edge edge : edges) {
        if (find(edge.u, parent) != find(edge.v, parent)) { // If u and v are not connected
            unionNodes(edge.u, edge.v, parent, rank); // Union the sets
            mstWeight += edge.weight; // Add edge weight to total
        }
    }
    
    return mstWeight; // Return the total weight of the MST
}

/*
Explanation:
- This function implements Kruskal's algorithm to find the Minimum Spanning Tree (MST) of a graph.
- The MST connects all vertices with the minimum total edge weight without forming any cycles.
- It uses a Union-Find data structure to manage and merge disjoint sets of nodes.
- The edges are sorted by weight to ensure that the smallest edges are considered first.
- The function returns the total weight of the MST.
*/
