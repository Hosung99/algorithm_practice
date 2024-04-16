#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <memory.h>
using namespace std;
int N,M;
int board[101][101];
vector<int> vec;
queue<int> q;
void bfs(int person)
{
	int visited[101];
	memset(visited, -1, sizeof(visited));
	q.push(person);
	visited[person] = 0;
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		for(int i = 1; i <= N; i++)
		{
			if (board[cur][i] && visited[i] == -1)
			{
				q.push(i);
				visited[i] = visited[cur] + 1;
			}
		}
	}
	int sum = 0;
	for(int i = 1; i <= N; i++)
		sum += visited[i];
	vec.push_back(sum);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> N >> M;
	int u,v;
	for(int i = 0; i < M; i++)
	{
		cin >> u >> v;
		board[u][v] = 1;
		board[v][u] = 1;
	}
	for(int i = 1; i <= N; i++)
		bfs(i);
	int mn = 2147483647;
	int ans = 0;
	for(int i = 0; i < vec.size(); i++)
	{
		if (vec[i] < mn)
		{
			ans = i + 1;
			mn = vec[i];
		}
	}
	cout << ans;
	return (0);
}