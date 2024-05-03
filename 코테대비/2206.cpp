#include <iostream>
#include <queue>
#include <tuple>
#include <algorithm>
using namespace std;
int N, M;
int board[1001][1001];
int visited[1001][1001][2];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
queue<tuple<int, int, bool>> q;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		string input;
		cin >> input;
		for (int j = 1; j <= M; j++)
		{
			board[i][j] = input[j - 1] - '0';
		}
	}
	q.push({1, 1, true});
	visited[1][1][1] = 1;
	while (!q.empty())
	{
		tuple<int, int, bool> cur = q.front();
		bool nz = get<2>(cur);
		q.pop();
		if (get<0>(cur) == N && get<1>(cur) == M)
		{
			cout << visited[N][M][nz];
			return (0);
		}
		for (int i = 0; i < 4; i++)
		{
			int nx = get<0>(cur) + dx[i];
			int ny = get<1>(cur) + dy[i];
			if (nx <= 0 || ny <= 0 || nx > N || ny > M)
				continue;
			if (board[nx][ny] == 1 && nz)
			{
				visited[nx][ny][0] = visited[get<0>(cur)][get<1>(cur)][nz] + 1;
				q.push({nx, ny, false});
			}
			else if (board[nx][ny] == 0 && visited[nx][ny][nz] == 0)
			{
				visited[nx][ny][nz] = visited[get<0>(cur)][get<1>(cur)][nz] + 1;
				q.push({nx, ny, nz});
			}
		}
	}
	cout << "-1";
	return (0);
}