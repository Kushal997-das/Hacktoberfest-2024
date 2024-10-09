// ## Credits

// This cheat sheet was created by [Mayur Nimkande](https://github.com/Mayur-nimkande-20), whose contributions are greatly appreciated.


#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int INF = 1e9; // A large value representing infinity

// Function to implement Dijkstra's algorithm for finding the shortest path
vector<int> dijkstra(int start, vector<vector<pair<int, int>>>& graph) {
    int V = graph.size(); // Number of vertices
    vector<int> dist(V, INF); // Distance array, initialized to "infinity"
    dist[start] = 0; // Distance to the starting node is 0
    
    // Min-heap (priority queue) to hold nodes and their distances
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start}); // Start from the initial node

    while (!pq.empty()) { // While there are nodes to process
        int u = pq.top().second; // Get the node with the smallest distance
        pq.pop(); // Remove it from the queue
        
        // Explore neighbors of the current node
        for (auto& edge : graph[u]) {
            int v = edge.first; // The neighboring node
            int weight = edge.second; // The distance to the neighbor
            
            // If a shorter path to neighbor is found
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight; // Update distance
                pq.push({dist[v], v}); // Add neighbor to the queue
            }
        }
    }
    
    return dist; // Return the distances from the start node
}

/*
Explanation:
- This function implements Dijkstra's algorithm to find the shortest path from a starting node to all other nodes in a weighted graph.
- It uses a priority queue (min-heap) to process the next node with the smallest known distance.
- The 'dist' array keeps track of the shortest distance from the start node to every other node.
- The algorithm iteratively updates the distances to each neighboring node based on the current node's distance.
- It returns an array of the shortest distances to all nodes from the start node.
*/
