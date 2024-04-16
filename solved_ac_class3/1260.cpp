#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int board[1001][1001];
int N, M, V;
bool visited_bfs[1001];
bool visited_dfs[1001];
queue<int> q;
vector<int> bfs_vec;
vector<int> dfs_vec;
void bfs(int v)
{
	q.push(v);
	visited_bfs[v] = true;
	while (!q.empty())
	{
		int curr = q.front();
		q.pop();
		bfs_vec.push_back(curr);
		for (int i = 1; i <= N; i++)
		{
			if (board[curr][i] && !visited_bfs[i])
			{
				q.push(i);
				visited_bfs[i] = true;
			}
		}
	}
}

void dfs(int v)
{
	dfs_vec.push_back(v);
	visited_dfs[v] = true;
	for (int i = 1; i <= N; i++)
	{
		if (board[v][i] && !visited_dfs[i])
		{
			dfs(i);
			visited_dfs[i] = true;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int u, v;
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++)
	{
		cin >> u >> v;
		board[u][v] = 1;
		board[v][u] = 1;
	}
	bfs(V);
	dfs(V);
	for (int i = 0; i < dfs_vec.size(); i++)
		cout << dfs_vec[i] << " ";
	cout << "\n";
	for (int i = 0; i < bfs_vec.size(); i++)
		cout << bfs_vec[i] << " ";
	return (0);
}