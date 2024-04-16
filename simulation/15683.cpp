#include <iostream>
#include <vector>
using namespace std;
int N,M;
int ans = 987654321;
int board[9][9];
vector<pair<int, int >> vec;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
void	check(int y, int x, int dir)
{
	dir %= 4;
	while(1)
	{
		int nx = x + dx[dir];
		int ny = y + dy[dir];
		if (nx < 0 || ny < 0 || nx >= M || ny >= N)
			return ;
		if (board[ny][nx] == 6)
			return ;
		if (board[ny][nx] != 0)
			continue ;
		board[ny][nx] = -1;
	}
}

void	dfs(int depth)
{
	if (depth == vec.size())
	{
		int cnt = 0;
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < M; j++)
			{
				if (board[i][j] == -1)
					cnt++;
			}
		}
		ans = min(ans, cnt);
		return ;
	}
	int y = vec[depth].first;
	int x = vec[depth].second;
	int temp[9][9];
	for(int i = 0; i < 4; i++) //우좌상하
	{
		for(int j = 0; j < N; j++)
			for(int k = 0; j < M; k++)
				temp[j][k] = board[j][k];
		if (board[y][x] == 1)
			check(y,x,i);
		else if (board[y][x] == 2)
		{
			check(y,x,i);
			check(y,x,i + 1);
		}
		else if (board[y][x] == 3)
		{
			check(y,x,i);
			check(y,x,i + 3);
		}
		else if (board[y][x] == 4)
		{
			check(y,x,i);
			check(y,x,i + 1);
			check(y,x,i + 3);
		}
		else if (board[y][x] == 5)
		{
			check(y,x,i);
			check(y,x,i + 1);
			check(y,x,i + 2);
			check(y,x,i + 3);
		}
		dfs(depth + 1);
		for(int j = 0; j < N; j++)
			for(int k = 0; j < M; k++)
				board[j][k] = temp[j][k];
	}
}

int main()
{
	cin >> N >> M;
	for(int i = 0 ; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			cin >> board[i][j];
			if (board[i][j] != 0 && board[i][j] != 6)
				vec.push_back({i,j});
		}
	}
	dfs(0);
	cout << ans;
	return (0);
}