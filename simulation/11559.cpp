#include <iostream>
#include <queue>
using namespace std;
char board[12][6];
bool visited[12][6];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
queue<pair<int, int>> q;

int	bfs()
{
	int cnt = 0;
	pair<int, int> temp = q.front();
	for(int i = 0; i < 12; i++)
		for(int j = 0; j < 6; j++)
			visited[i][j] = 0;
	while (!q.empty())
	{
		pair<int,int> curr = q.front();
		q.pop();
		cnt++;
		for(int dir = 0; dir < 4; dir++)
		{
			int nx = curr.first + dx[dir];
			int ny = curr.second + dy[dir];
			if (nx < 0 || ny < 0 || nx >= 12 || ny >= 6)
				continue ;
			if (board[curr.first][curr.second] != board[nx][ny])
				continue ;
			if (!visited[nx][ny])
				continue ;
			visited[nx][ny] = true;
			q.push({nx,ny});
		}
	}
	if (cnt >= 4)
		q.push({temp.first,temp.second});
	return (cnt);
}

void	crash()
{
	while(!q.empty())
	{
		pair<int,int> curr = q.front();
		q.pop();
		for(int dir = 0; dir < 4; dir++)
		{
			int nx = curr.first + dx[dir];
			int ny = curr.second + dy[dir];
			if (nx < 0 || ny < 0 || nx >= 12 || ny >= 6)
				continue ;
			if (board[curr.first][curr.second] != board[nx][ny])
				continue ;
			if (!visited[nx][ny])
				continue ;
			board[nx][ny] = '.';
			q.push({nx,ny});
		}
	}
}

int main()
{
	for(int i = 0; i < 12; i++)
		for(int j = 0; j < 6; j++)
			cin >> board[i][j];
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			if (board[i][j] != '.')
			{
				q.push({i,j});
				if (bfs() != 0)
					crash();
			}
		}
	}
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			cout << board[i][j];
		}
		cout << "\n";
	}
	return (0);
}