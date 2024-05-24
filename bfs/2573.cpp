#include <iostream>
#include <queue>
using namespace std;
int N, M;
int board[301][301];
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
		}
	}
	int year = 0;
	bool flag = true;
	bool seperate = false;
	while (flag)
	{
		year++;
		int temp_board[301][301] = {
			0,
		};
		bool visited[301][301] = {
			0,
		};
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				temp_board[i][j] = board[i][j];
			}
		}
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (board[i][j] > 0)
				{
					int cnt = 0;
					for (int dir = 0; dir < 4; dir++)
					{
						int nx = i + dx[dir];
						int ny = j + dy[dir];
						if (nx < 0 || ny < 0 || nx >= N || ny >= M)
							continue;
						if (board[nx][ny] > 0)
							continue;
						cnt++;
					}
					temp_board[i][j] -= cnt;
				}
			}
		}
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				board[i][j] = temp_board[i][j];
			}
		}
		int area = 0;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (board[i][j] > 0 && !visited[i][j])
				{
					area++;
					q.push({i, j});
					while (!q.empty())
					{
						pair<int, int> cur = q.front();
						q.pop();
						for (int dir = 0; dir < 4; dir++)
						{
							int nx = cur.first + dx[dir];
							int ny = cur.second + dy[dir];
							if (nx < 0 || ny < 0 || nx >= N || ny >= M)
								continue;
							if (visited[nx][ny])
								continue;
							if (board[nx][ny] <= 0)
								continue;
							q.push({nx, ny});
							visited[nx][ny] = true;
						}
					}
				}
			}
		}
		if (area >= 2)
		{
			flag = false;
			seperate = true;
		}
		else
		{
			bool check = false;
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
				{
					if (board[i][j] > 0)
						check = true;
				}
			}
			flag = check;
		}
	}
	if (seperate)
		cout << year;
	else
		cout << "0";
	return (0);
}