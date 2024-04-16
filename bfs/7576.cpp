#include <iostream>
#include <queue>
using namespace std;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int M,N,ans;
int board[1001][1001];
int visited[1001][1001];
queue<pair<int,int> > q;
int main()
{
	cin >> M >> N;
	for (int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 1)
			{
				q.push({i,j});
				visited[i][j] = 1;
			}
		}
	}
	while(!q.empty())
	{
		pair<int,int> curr = q.front();
		q.pop();
		for(int i = 0; i < 4; i++)
		{
			int nx = curr.first + dx[i];
			int ny = curr.second + dy[i];
			if (nx < 0 || ny < 0 || nx >= N || ny >= M)
				continue ;
			if (visited[nx][ny] != 0 || board[nx][ny] != 0)
				continue ;
			visited[nx][ny] = visited[curr.first][curr.second] + 1;
			q.push({nx,ny});
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (board[i][j] != -1 && visited[i][j] == 0)
			{
				cout << "-1";
				return (0);
			}
			ans = max(ans,visited[i][j]);
		}
	}
	cout << ans - 1;
	return (0);
}