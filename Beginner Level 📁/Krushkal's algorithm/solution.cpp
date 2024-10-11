#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'

// Disjoint Set Union (DSU) class
class DSU {
public:
  vector<int> parent, size; // Parent and size arrays

  // Constructor to initialize DSU with n elements
  DSU(int n = -1) {
    if (n >= 0)
      init(n);
  }

  // Initialize the DSU structure
  void init(int n) {
    parent.resize(n);
    size.assign(n, 1);
    for (int i = 0; i < n; i++)
      parent[i] = i; // Each node is its own parent
  }

  // Find the root of a node with path compression
  int find(int node) {
    if (node == parent[node])
      return node;
    return parent[node] = find(parent[node]);
  }

  // Unite two nodes
  void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y) {
      if (size[x] < size[y])
        swap(x, y);
      parent[y] = x;
      size[x] += size[y];
    }
  }
};

int32_t main() {
  std::ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n = 5, m = 6; // Number of vertices and edges (default values)

  DSU d(n); // Create DSU for n vertices

  // Default edges with their weights: {weight, vertex1, vertex2}
  vector<vector<int>> v = {{1, 0, 1}, {3, 1, 2}, {2, 0, 2},
                           {5, 1, 3}, {4, 2, 3}, {6, 3, 4}};

  cout << "Edges in MST are :- " << endl;

  sort(v.begin(), v.end()); // Sort edges by weight
  int totalcost = 0;        // Total cost of MST

  // Iterate through edges to form the MST
  for (auto edge : v) {
    int w = edge[0], a = edge[1], b = edge[2];
    if (d.find(a) == d.find(b))
      continue; // Skip if already connected

    cout << a << " -> " << b << endl; // Print included edge
    d.unite(a, b);                    // Union the vertices
    totalcost += w;                   // Update total cost
  }

  cout << "Total cost of MST is : " << totalcost << endl; // Print total cost
}