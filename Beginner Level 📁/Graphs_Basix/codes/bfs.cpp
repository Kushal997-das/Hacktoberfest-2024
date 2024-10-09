// ## Credits

// This cheat sheet was created by [Mayur Nimkande](https://github.com/Mayur-nimkande-20), whose contributions are greatly appreciated.


#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to perform Breadth-First Search (BFS)
void bfs(int start, vector<vector<int>>& adj) {
    // Create a queue to hold nodes to visit
    queue<int> q;
    // Create a visited array to keep track of visited nodes
    vector<bool> visited(adj.size(), false);
    
    // Start the BFS from the 'start' node
    q.push(start);
    visited[start] = true; // Mark the start node as visited
    
    while (!q.empty()) { // While there are nodes to visit
        int node = q.front(); // Get the front node of the queue
        cout << node << " "; // Print the node (or process it)
        q.pop(); // Remove the node from the queue
        
        // Visit all the neighbors of the current node
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) { // If the neighbor hasn't been visited
                q.push(neighbor); // Add it to the queue for visiting
                visited[neighbor] = true; // Mark it as visited
            }
        }
    }
}

/*
Explanation:
- This function implements Breadth-First Search (BFS) on a graph.
- It starts from a specified node (the 'start' node) and explores all of its neighboring nodes first.
- It uses a queue to keep track of nodes that need to be visited, ensuring that nodes are processed in the order they are discovered.
- A 'visited' array is used to mark nodes as visited to prevent re-visiting them, which would lead to an infinite loop.
- The function prints out each node as it is visited.
*/
