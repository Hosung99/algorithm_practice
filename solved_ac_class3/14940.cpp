#include <iostream>
#include <queue>
using namespace std;
int n,m;
int board[1000][1000];
int visited[1000][1000];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
queue<pair<int, int>> q;
int main()
{
	cin >> n >> m;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 2)
				q.push({i, j});
		}
	}
	while (!q.empty())
	{
		pair<int, int> curr = q.front();
		q.pop();
		for(int dir = 0; dir < 4; dir++)
		{
			int nx = curr.first + dx[dir];
			int ny = curr.second + dy[dir];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m)
				continue ;
			if (visited[nx][ny] || board[nx][ny] != 1)
				continue ;
			visited[nx][ny] = visited[curr.first][curr.second] + 1;
			q.push({nx,ny});
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if (board[i][j] == 1 && visited[i][j] == 0)
				visited[i][j] = -1;
			cout << visited[i][j] << " ";
		}
		cout << "\n";
	}
	return (0);
}