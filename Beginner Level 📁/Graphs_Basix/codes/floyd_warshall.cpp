// ## Credits

// This cheat sheet was created by [Mayur Nimkande](https://github.com/Mayur-nimkande-20), whose contributions are greatly appreciated.


#include <iostream>
#include <vector>
#include <limits>

using namespace std;

#define INF numeric_limits<int>::max() // Define infinity as the maximum integer value

// Function to implement the Floyd-Warshall algorithm
void floydWarshall(int V, vector<vector<int>>& graph) {
    // Create a distance matrix initialized with the graph values
    vector<vector<int>> dist = graph;

    // Iterate through each vertex as an intermediate point
    for (int k = 0; k < V; k++) {
        // Iterate through each source vertex
        for (int i = 0; i < V; i++) {
            // Iterate through each destination vertex
            for (int j = 0; j < V; j++) {
                // Check if the path through vertex k is shorter than the current known path
                if (dist[i][k] != INF && dist[k][j] != INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    // Print the shortest distance matrix
    cout << "The following matrix shows the shortest distances between every pair of vertices:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                cout << "INF\t"; // Print INF for unreachable paths
            else
                cout << dist[i][j] << "\t"; // Print the shortest distance
        }
        cout << endl;
    }
}

int main() {
    // Number of vertices
    int V = 4;
    
    // Define the graph as an adjacency matrix
    vector<vector<int>> graph = {
        {0, 3, INF, 5},
        {2, 0, INF, 4},
        {INF, 1, 0, INF},
        {INF, INF, 2, 0}
    };

    // Call the Floyd-Warshall algorithm
    floydWarshall(V, graph);
    
    return 0;
}

/*
Explanation of the Floyd-Warshall Algorithm:

1. **Purpose**: The Floyd-Warshall algorithm is used to find the shortest paths between all pairs of vertices in a weighted graph. It can handle negative weights but not negative cycles (where the total weight becomes negative).

2. **Input**: The algorithm takes in a graph represented as an adjacency matrix. Each element `graph[i][j]` represents the weight of the edge from vertex `i` to vertex `j`. If there is no edge, the value is set to `INF` (infinity), which signifies that there is no direct path between the two vertices.

3. **Distance Matrix**: We create a distance matrix, `dist`, which initially is the same as the input graph. It will be updated to reflect the shortest distances between each pair of vertices.

4. **Main Idea**: The algorithm uses a three-level nested loop:
   - The outer loop iterates over each vertex `k`, which acts as an intermediate point for checking paths.
   - The middle loop iterates over each source vertex `i`.
   - The innermost loop iterates over each destination vertex `j`.
   - For each pair of vertices `i` and `j`, the algorithm checks if the path from `i` to `j` through `k` is shorter than the currently known shortest path from `i` to `j`. If it is, we update the distance matrix with this new shorter distance.

5. **Updating Distances**: The line `dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);` performs the check and update. It only updates the distance if both `dist[i][k]` and `dist[k][j]` are not `INF`, which means both paths are reachable.

6. **Output**: After processing all vertices, the algorithm prints the resulting distance matrix, showing the shortest distances between each pair of vertices. If the distance is `INF`, it indicates that there is no path between those two vertices.

7. **Time Complexity**: The time complexity of the Floyd-Warshall algorithm is O(V^3), where V is the number of vertices. This is because of the three nested loops, each iterating through all vertices.

8. **Use Cases**: This algorithm is widely used in applications such as network routing, urban transportation systems, and game development, where determining the shortest path between points is necessary.

By following these steps, the Floyd-Warshall algorithm efficiently computes the shortest paths in a graph.
*/
