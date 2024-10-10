#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n;
vector<int> edge[100001];
vector<int> backedge[100001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m;
	cin >> n >> m;
	int in_degree[n + 1], dp[n + 1];
	for (int i = 0; i <= n; i++) {
		in_degree[i] = 0;
		dp[i] = 0;
	}
	dp[1] = 1;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		edge[a].push_back(b);
		backedge[b].push_back(a);
		in_degree[b]++;
	}
	// uses Kahn's algorithm
	queue<int> q;
	for (int i = 0; i < n; i++) {
		if (in_degree[i] == 0) { q.push(i); }
	}

	while (!q.empty()) {
		int node = q.front();
		q.pop();
		for (int next : edge[node]) {
			in_degree[next]--;
			if (in_degree[next] == 0) q.push(next);
		}

		for (int prev : backedge[node]) {
			dp[node] = (dp[node] + dp[prev]) % 1000000007;
		}
	}
	cout << dp[n] << endl;
	return 0;
}