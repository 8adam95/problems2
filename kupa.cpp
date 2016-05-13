#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int MAXN = 200001;

vector<int> adj[MAXN], path;
queue<int> Q;
int d[MAXN], parent[MAXN];
bool visited[MAXN];

int main() {
	int N, M;

	cin >> N >> M;

	while (M--) {
		int u, v;

		cin >> u >> v;
		u--;
		v--;

		adj[u].push_back(v);
	}

	fill(d, d+MAXN, MAXN);

	visited[0] = true;
	d[0] = 0;
	parent[0] = -1;
	Q.push(0);

	while (!Q.empty()) {
		int u = Q.front();

		Q.pop();

		for (int i = 0; i < adj[u].size(); i++)
			if (!visited[adj[u][i]]) {
				visited[adj[u][i]] = true;
				d[adj[u][i]] = d[u]+1;
				parent[adj[u][i]] = u;
				Q.push(adj[u][i]);
			}
	}

	cout << d[N-1] << "\n";

	int u = N-1;
	while (u != 0) {
		path.push_back(u);
		u = parent[u];
	}
	path.push_back(0);

	reverse(path.begin(), path.end());

	for (int i = 0; i < path.size(); i++)
		cout << path[i]+1 << " ";
	cout << "\n";

	return 0;
}
