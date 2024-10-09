// ## Credits

// This cheat sheet was created by [Mayur Nimkande](https://github.com/Mayur-nimkande-20), whose contributions are greatly appreciated.


#include <iostream>
#include <vector>

using namespace std;

// Utility function for DFS
void dfsUtil(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true; // Mark the current node as visited
    cout << node << " "; // Print the node (or process it)

    // Visit all the neighbors of the current node
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) { // If the neighbor hasn't been visited
            dfsUtil(neighbor, adj, visited); // Recursively visit it
        }
    }
}

// Function to perform Depth-First Search (DFS)
void dfs(int start, vector<vector<int>>& adj) {
    vector<bool> visited(adj.size(), false); // Keep track of visited nodes
    dfsUtil(start, adj, visited); // Start DFS from the 'start' node
}

/*
Explanation:
- This function performs Depth-First Search (DFS) on a graph.
- DFS explores as far as possible along each branch before backtracking, creating a path-like exploration.
- The 'dfsUtil' function is a utility that performs the actual recursion for exploring nodes.
- Similar to BFS, a 'visited' array is used to keep track of which nodes have been visited, preventing cycles.
- The function prints each node as it is visited.
*/
