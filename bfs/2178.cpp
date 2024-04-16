#include <iostream>
#include <queue>
using namespace std;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
string board[101];
int dist[101][101];
queue<pair<int, int>> q;
int N,M;
int main()
{
	cin >> N >> M;
	for(int i = 0; i < N; i++)
		cin >> board[i];
	q.push({0,0});
	dist[0][0] = 1;
	while (!q.empty())
	{
		pair<int, int> curr = q.front();
		q.pop();
		for(int dir = 0; dir < 4; dir++)
		{
			int nx = curr.first + dx[dir];
			int ny = curr.second + dy[dir];
			if (nx < 0 || ny < 0 || nx >= N || ny >= M)
				continue ;
			if (board[nx][ny] != '1' || dist[nx][ny] != 0)
				continue ;
			dist[nx][ny] = dist[curr.first][curr.second] + 1;
			q.push({nx,ny});
		}
	}
	cout << dist[N - 1][M - 1];
	return (0);
}