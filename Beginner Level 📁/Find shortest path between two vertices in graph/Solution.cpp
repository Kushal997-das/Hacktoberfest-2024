#include <iostream>
#include <string>
using namespace std;

#define INFINITY 999 // A large number to represent infinity (unreachable nodes)

class vertices
{
public:
    int maxnodes = 4;              // The total number of nodes/vertices in the graph
    int visited[4] = {0, 0, 0, 0}; // Array to keep track of visited nodes (not used in this implementation)

    // Adjacency matrix to represent the graph
    int Adjacency_matrix[4][4] = {
        {0, 5, 0, 4}, // Weights of edges from V1 to other vertices
        {0, 0, 2, 0}, // Weights of edges from V2 to other vertices
        {0, 0, 0, 1}, // Weights of edges from V3 to other vertices
        {6, 3, 0, 0}  // Weights of edges from V4 to other vertices
    };

    string letters[4] = {"V1", "V2", "V3", "V4"}; // Labels for vertices

    // Function to implement Dijkstra's algorithm
    void dijkstra(int startNode, int targetNode)
    {
        int dist[maxnodes];      // Array to hold the shortest distance from the startNode to each vertex
        bool shortSet[maxnodes]; // Array to mark vertices whose minimum distance is finalized
        int previous[maxnodes];  // Array to store the previous vertex on the shortest path to each vertex

        // Initializing distances to INFINITY, shortSet to false, and previous to -1
        for (int i = 0; i < maxnodes; i++)
        {
            dist[i] = INFINITY;
            shortSet[i] = false;
            previous[i] = -1;
        }
        dist[startNode] = 0; // Distance to the startNode itself is always 0

        // Loop to find the shortest path to each vertex
        for (int count = 0; count < maxnodes - 1; count++)
        {
            // Find the vertex with the minimum distance that hasn't been processed
            int minDist = INFINITY, minIndex;
            for (int v = 0; v < maxnodes; v++)
            {
                if (!shortSet[v] && dist[v] <= minDist)
                {
                    minDist = dist[v];
                    minIndex = v;
                }
            }

            // Mark the selected vertex as processed
            shortSet[minIndex] = true;

            // Update the distance value of the adjacent vertices of the selected vertex
            for (int v = 0; v < maxnodes; v++)
            {
                // Update dist[v] only if it's not in shortSet, there is an edge from minIndex to v,
                // and the new distance is shorter than the current distance
                if (!shortSet[v] && Adjacency_matrix[minIndex][v] && dist[minIndex] != INFINITY && dist[minIndex] + Adjacency_matrix[minIndex][v] < dist[v])
                {
                    dist[v] = dist[minIndex] + Adjacency_matrix[minIndex][v];
                    previous[v] = minIndex; // Keep track of the path
                }
            }
        }

        // Display the shortest distance from startNode to targetNode
        cout << "Shortest Distances from node " << letters[startNode] << ": " << endl;
        cout << "To node " << letters[targetNode] << " : " << (dist[targetNode] == INFINITY ? "INFINITY" : to_string(dist[targetNode])) << endl;

        // Display the shortest path from startNode to targetNode
        if (dist[targetNode] != INFINITY)
        {
            cout << "Path : ";
            int path[maxnodes];
            int pathIndex = 0;

            // Trace the path from targetNode back to startNode using the previous array
            for (int p = targetNode; p != -1; p = previous[p])
            {
                path[pathIndex++] = p;
            }

            // Print the path in the correct order
            for (int i = pathIndex - 1; i >= 0; i--)
            {
                cout << letters[path[i]];
                if (i > 0)
                    cout << " -> ";
            }
            cout << endl;
        }
        else
        {
            // If there is no path between startNode and targetNode
            cout << "No path exists between " << letters[startNode] << " and " << letters[targetNode] << endl;
        }
    }
};

int main()
{
    vertices graph; // Create a graph object
    int startNode, targetNode;

    // Prompt the user to enter the start and target vertices
    cout << "Enter the start vertex (0 for V1, 1 for V2, 2 for V3, 3 for V4): ";
    cin >> startNode;
    cout << "Enter the target vertex (0 for V1, 1 for V2, 2 for V3, 3 for V4): ";
    cin >> targetNode;

    // Run Dijkstra's algorithm on the provided input
    graph.dijkstra(startNode, targetNode);

    return 0;
}
