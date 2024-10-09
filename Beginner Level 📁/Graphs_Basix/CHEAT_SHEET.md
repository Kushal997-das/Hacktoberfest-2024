
# Graph Data Structure Cheat Sheet

## 1. What is a Graph?
A **Graph** is a data structure consisting of a set of nodes (or vertices) and edges that connect these nodes.

- **Vertices (V)**: Individual entities in the graph.
- **Edges (E)**: Connections between two vertices.

A graph is represented as **G(V, E)**, where:
- **V** is a set of vertices
- **E** is a set of edges

### Types of Graphs:
1. **Directed Graph (Digraph)**: Edges have direction (u → v).
2. **Undirected Graph**: Edges are bidirectional (u ↔ v).
3. **Weighted Graph**: Edges have weights or costs associated with them.
4. **Unweighted Graph**: All edges have the same weight or no weight at all.

### Common Terminologies:
- **Adjacency**: Two vertices are adjacent if they are connected by an edge.
- **Degree**: The number of edges connected to a vertex.
- **Path**: A sequence of vertices where each adjacent pair is connected by an edge.
- **Cycle**: A path where the first and last vertices are the same.

## 2. Graph Representation

### 2.1 Adjacency Matrix
An `N x N` matrix is used to represent the graph where `N` is the number of vertices.
- **adj[i][j] = 1** if there is an edge from vertex `i` to vertex `j`.
- **adj[i][j] = 0** otherwise.

### 2.2 Adjacency List
Each vertex has a list of all vertices it is connected to. This representation is more space-efficient for sparse graphs.

## 3. Graph Traversal

### 3.1 Breadth-First Search (BFS)
A level-order traversal technique that starts from a given node and visits all its neighbors, then proceeds to the neighbors' neighbors.

### 3.2 Depth-First Search (DFS)
DFS explores as far as possible along each branch before backtracking.

## 4. Common Graph Algorithms

### 4.1 Shortest Path Algorithms
- **Dijkstra’s Algorithm**: Finds the shortest path from a single source to all other vertices (for non-negative weights).
- **Bellman-Ford Algorithm**: Handles graphs with negative weights.
- **Floyd-Warshall Algorithm**: Finds the shortest paths between all pairs of vertices.

### 4.2 Minimum Spanning Tree Algorithms
- **Prim’s Algorithm**: Greedy algorithm to find the MST, starting from any node.
- **Kruskal’s Algorithm**: Uses union-find to select the shortest edges.

### 4.3 Topological Sorting
A linear ordering of vertices in a directed acyclic graph (DAG).

### 4.4 Detecting Cycles
- Use DFS to detect cycles in directed/undirected graphs.

### 4.5 Strongly Connected Components (Kosaraju’s Algorithm)
Decomposes a directed graph into strongly connected components.

## 5. Frequently Asked Graph Problems

### 5.1 Basic Graph Traversal
- BFS of a graph
- DFS of a graph
- Connected Components

### 5.2 Shortest Paths
- Dijkstra’s Algorithm
- Bellman-Ford Algorithm
- Shortest Path in Binary Maze

### 5.3 MST (Minimum Spanning Tree)
- Prim's MST
- Kruskal's MST

### 5.4 Advanced Graph Problems
- Topological Sort of a Directed Graph
- Detect Cycle in Directed Graph
- Strongly Connected Components

## 6. Frequently Asked DSA Graph Questions

1. **Breadth-First Search (BFS) and Depth-First Search (DFS)**
   - Implement BFS and DFS for a graph.
   - Find the number of connected components in an undirected graph.

2. **Shortest Path Algorithms**
   - Find the shortest path in an unweighted graph (BFS).
   - Find the shortest path in a weighted graph (Dijkstra, Bellman-Ford).

3. **Cycle Detection**
   - Detect a cycle in an undirected graph (DFS).
   - Detect a cycle in a directed graph (DFS with backtracking).

4. **Topological Sort**
   - Find the topological order of vertices in a directed acyclic graph (Kahn's Algorithm or DFS-based approach).

5. **Minimum Spanning Tree (MST)**
   - Implement Prim’s algorithm.
   - Implement Kruskal’s algorithm.

6. **Strongly Connected Components**
   - Find all the strongly connected components (SCCs) in a directed graph (Kosaraju’s algorithm, Tarjan’s algorithm).

7. **Graph Coloring**
   - Implement graph coloring using BFS/DFS.
   - Check if a graph is bipartite.

8. **Miscellaneous**
   - Find the number of islands in a matrix (connected components problem).
   - Clone a graph (deep copy of a graph).

## 7. Common Interview Questions
1. **Leetcode 200:** Number of Islands
2. **Leetcode 207:** Course Schedule (Topological Sort)
3. **Leetcode 743:** Network Delay Time (Dijkstra)
4. **Leetcode 785:** Is Graph Bipartite?
5. **Leetcode 997:** Find the Town Judge
6. **Leetcode 399:** Evaluate Division (Graph Representation of Equations)

--

## Credits

This cheat sheet was created by [Mayur Nimkande](https://github.com/Mayur-nimkande-20), whose contributions are greatly appreciated.
