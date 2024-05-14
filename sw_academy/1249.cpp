#include <iostream>
#include <queue>
using namespace std;
int tc;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> tc;
	for (int i = 1; i <= tc; i++)
	{
		int ans = 2147483647;
		int N, board[101][101] = {
				   0,
			   };
		int visited[101][101];
		for (int j = 0; j < 101; j++)
		{
			for (int k = 0; k < 101; k++)
				visited[j][k] = 2147483647;
		}
		queue<pair<int, int>> q;
		cin >> N;
		for (int j = 0; j < N; j++)
		{
			string str;
			cin >> str;
			for (int k = 0; k < N; k++)
			{
				board[j][k] = str[k] - '0';
			}
		}
		q.push({0, 0});
		visited[0][0] = 0;
		while (!q.empty())
		{
			pair<int, int> curr = q.front();
			int x = curr.first;
			int y = curr.second;
			q.pop();
			for (int k = 0; k < 4; k++)
			{
				int nx = x + dx[k];
				int ny = y + dy[k];
				if (nx < 0 || ny < 0 || nx >= N || ny >= N)
					continue;
				if (visited[nx][ny] > board[nx][ny] + visited[x][y])
				{
					visited[nx][ny] = visited[x][y] + board[nx][ny];
					q.push({nx, ny});
				}
			}
		}
		cout << "#" << i << " " << visited[N - 1][N - 1] << "\n";
	}
	return (0);
}