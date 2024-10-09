// ## Credits

// This cheat sheet was created by [Mayur Nimkande](https://github.com/Mayur-nimkande-20), whose contributions are greatly appreciated.


#include <iostream>
#include <vector>

using namespace std;

const int INF = 1e9; // A large value representing infinity

// Function to implement Bellman-Ford algorithm for finding the shortest path
bool bellmanFord(int start, int V, vector<vector<int>>& edges, vector<int>& dist) {
    dist[start] = 0; // Distance to the start node is 0
    
    // Relax edges repeatedly
    for (int i = 0; i < V - 1; i++) {
        for (auto edge : edges) {
            int u = edge[0]; // Starting node of the edge
            int v = edge[1]; // Ending node of the edge
            int weight = edge[2]; // Weight of the edge
            
            // If the current distance to u is not infinite
            if (dist[u] != INF && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight; // Update the distance to v
            }
        }
    }
    
    // Check for negative-weight cycles
    for (auto edge : edges) {
        int u = edge[0];
        int v = edge[1];
        int weight = edge[2];
        
        // If we can still relax the edge, there is a negative cycle
        if (dist[u] != INF && dist[u] + weight < dist[v]) {
            return false; // Negative cycle found
        }
    }
    
    return true; // No negative cycles found
}

/*
Explanation:
- This function implements the Bellman-Ford algorithm to find the shortest paths from a starting node to all other nodes in a graph.
- Unlike Dijkstra's, it can handle negative weights and detects negative cycles.
- The algorithm relaxes all edges multiple times (V-1 times, where V is the number of vertices).
- After relaxation, it checks for negative cycles by attempting to relax the edges one more time.
- It returns a boolean indicating whether a negative cycle was detected.
*/
