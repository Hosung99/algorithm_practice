#include <iostream>
#include <queue>
using namespace std;
int N,M,cnt;
char board[601][601];
bool visited[601][601];
queue<pair<int, int>> q;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 'I')
			{
				q.push({i,j});
				visited[i][j] = true;
			}
		}
	}
	while(!q.empty())
	{
		pair<int, int> cur = q.front();
		q.pop();
		for(int i = 0; i < 4; i++)
		{
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if (visited[nx][ny])
				continue;
			if (board[nx][ny] == 'X')
				continue;
			if (nx < 0 || ny < 0 || nx >= N || ny >= M)
				continue;
			if (board[nx][ny] == 'P')
				cnt++;
			visited[nx][ny] = true;
			q.push({nx,ny});
		}
	}
	if (cnt == 0)
		cout << "TT";
	else
		cout << cnt;
	return (0);
}