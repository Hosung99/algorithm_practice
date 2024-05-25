#include <iostream>
#include <queue>
#include <tuple>
using namespace std;
int N, M, K, ans = 2147483647;
int board[1001][1001];
int visited[1001][1001][11];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
queue<tuple<int, int, int>> q;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> M >> K;
	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;
		for (int j = 0; j < M; j++)
		{
			board[i][j] = str[j] - '0';
		}
	}
	q.push({0, 0, K});
	visited[0][0][K] = 1;
	while (!q.empty())
	{
		auto cur = q.front();
		int x = get<0>(cur);
		int y = get<1>(cur);
		int z = get<2>(cur);
		q.pop();
		if (x == N - 1 && y == M - 1)
		{
			ans = min(ans, visited[x][y][z]);
			continue;
		}
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = x + dx[dir];
			int ny = y + dy[dir];
			if (nx < 0 || ny < 0 || nx >= N || ny >= M)
				continue;
			if (board[nx][ny])
			{
				if (z > 0)
				{
					if (visited[nx][ny][z - 1] != 0)
						continue;
					visited[nx][ny][z - 1] = visited[x][y][z] + 1;
					q.push({nx, ny, z - 1});
				}
			}
			else
			{
				if (visited[nx][ny][z] != 0)
					continue;
				visited[nx][ny][z] = visited[x][y][z] + 1;
				q.push({nx, ny, z});
			}
		}
	}
	if (ans == 2147483647)
		cout << "-1";
	else
		cout << ans;
	return (0);
}
