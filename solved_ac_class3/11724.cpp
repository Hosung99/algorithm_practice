#include <iostream>

using namespace std;
int N,M,cnt;
int board[1001][1001];
bool visited[1001];

void dfs(int v)
{
	visited[v] = true;
	for(int i = 1; i <= N; i++)
	{
		if (board[v][i] && !visited[i])
		{
			visited[i] = true;
			dfs(i);
		}
	}
}

int main()
{
	cin >> N >> M;
	for(int i = 0; i < M; i++)
	{
		int u,v;
		cin >> u >> v;
		board[u][v] = 1;
		board[v][u] = 1;
	}
	for(int i = 1; i <= N; i++)
	{
		if (!visited[i])
		{
			dfs(i);
			cnt++;
		}
	}
	cout << cnt;
	return (0);
}