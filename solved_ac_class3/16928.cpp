#include <iostream>
#include <queue>
using namespace std;
int N, M;
int board[101];
int dx[6] = {1, 2, 3, 4, 5, 6};
bool visited[101];
queue<pair<int, int>> q;
vector<int> vec;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;
		board[x] = y;
	}
	for (int i = 0; i < M; i++)
	{
		int u, v;
		cin >> u >> v;
		board[u] = v;
	}
	q.push({1, 0});
	visited[1] = true;
	while (!q.empty())
	{
		pair<int, int> curr = q.front();
		q.pop();
		if (curr.first == 100)
		{
			cout << curr.second;
			return (0);
		}
		for (int i = 0; i < 6; i++)
		{
			int nx = dx[i] + curr.first;
			if (nx > 100)
				continue;
			if (visited[nx])
				continue;
			visited[nx] = true;
			if (board[nx] != 0)
			{
				nx = board[nx];
				if (nx > 100)
					continue;
			}
			q.push({nx, curr.second + 1});
		}
	}
	return (0);
}