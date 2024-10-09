// ## Credits

// This cheat sheet was created by [Mayur Nimkande](https://github.com/Mayur-nimkande-20), whose contributions are greatly appreciated.


#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Function to perform DFS for topological sorting
void topologicalSortUtil(int node, vector<vector<int>>& adj, vector<bool>& visited, stack<int>& Stack) {
    visited[node] = true; // Mark the current node as visited

    // Visit all the neighbors of the current node
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            topologicalSortUtil(neighbor, adj, visited, Stack); // Recur for unvisited neighbors
        }
    }
    
    Stack.push(node); // Push the current node to the stack after visiting all its neighbors
}

// Function to perform topological sorting on a directed graph
void topologicalSort(vector<vector<int>>& adj) {
    stack<int> Stack; // Stack to hold the topological order
    vector<bool> visited(adj.size(), false); // Keep track of visited nodes

    // Call the recursive helper function for each node
    for (int i = 0; i < adj.size(); i++) {
        if (!visited[i]) {
            topologicalSortUtil(i, adj, visited, Stack); // Start DFS
        }
    }

    // Print the topological order
    while (!Stack.empty()) {
        cout << Stack.top() << " "; // Print the nodes in topological order
        Stack.pop(); // Remove the node from the stack
    }
}

/*
Explanation:
- This function implements topological sorting for a directed acyclic graph (DAG).
- Topological sorting orders the nodes such that for every directed edge (u, v), node u comes before node v.
- It uses a stack to store the order of nodes as they are finished processing.
- A visited array is used to avoid processing a node more than once.
- After finishing all nodes, it prints the nodes in topological order by popping them from the stack.
*/
