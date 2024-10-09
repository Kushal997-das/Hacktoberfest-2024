
// ## Credits

// This cheat sheet was created by [Mayur Nimkande](https://github.com/Mayur-nimkande-20), whose contributions are greatly appreciated.


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Struct to represent an edge in the graph
struct Edge {
    int u, v, weight; // vertices u and v and the weight of the edge
};

// Function to compare two edges based on their weight
bool compare(Edge a, Edge b) {
    return a.weight < b.weight; // return true if weight of edge a is less than edge b
}

// Function to find the root of the set that contains vertex v
int findSet(int v, vector<int>& parent) {
    if (v == parent[v]) // if v is its own parent
        return v; // return v as the root
    // Path compression: update the parent of v to the root
    return parent[v] = findSet(parent[v], parent);
}

// Function to unite two sets containing vertices a and b
void unionSets(int a, int b, vector<int>& parent, vector<int>& rank) {
    a = findSet(a, parent); // find the root of set containing a
    b = findSet(b, parent); // find the root of set containing b
    if (a != b) { // if a and b are in different sets
        // Union by rank: attach the tree with a smaller rank under the root of the tree with a larger rank
        if (rank[a] < rank[b])
            swap(a, b); // ensure a is the root with greater rank
        parent[b] = a; // make b's root point to a's root
        // If the ranks are equal, increase the rank of the new root
        if (rank[a] == rank[b])
            rank[a]++;
    }
}

// Function implementing Kruskal's algorithm to find the weight of the Minimum Spanning Tree (MST)
int kruskal(int V, vector<Edge>& edges) {
    vector<int> parent(V), rank(V, 0); // create parent and rank vectors
    for (int i = 0; i < V; i++)
        parent[i] = i; // initialize each vertex to be its own parent
    
    sort(edges.begin(), edges.end(), compare); // sort edges by weight
    int mstWeight = 0; // variable to store the total weight of the MST
    
    // Iterate over sorted edges
    for (Edge e : edges) {
        // Check if the vertices u and v of the edge belong to different sets
        if (findSet(e.u, parent) != findSet(e.v, parent)) {
            mstWeight += e.weight; // add the weight of the edge to mstWeight
            unionSets(e.u, e.v, parent, rank); // unite the sets containing u and v
        }
    }
    
    return mstWeight; // return the total weight of the MST
}

