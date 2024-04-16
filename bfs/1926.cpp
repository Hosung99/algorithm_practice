#include <iostream>
#include <queue>
using namespace std;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int n,m,ans,cnt;
int board[501][501];
bool visitied[501][501];
queue<pair<int, int> > q;
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];
	for (int i = 0; i < n ; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == 1 && visitied[i][j] == 0)
			{
				q.push({i,j});
				cnt++;
				visitied[i][j] = 1;
				int area = 0;
				while(!q.empty())
				{
					pair<int, int> curr = q.front();
					q.pop();
					area++;
					for(int k = 0; k < 4; k++)
					{
						int nx = curr.first + dx[k];
						int ny = curr.second + dy[k];
						if (nx < 0 || ny < 0 || nx >= n || ny >= m)
							continue ;
						if (visitied[nx][ny] || board[nx][ny] != 1)
							continue ;
						visitied[nx][ny] = 1;
						q.push({nx,ny});
					}
				}
				ans = max(ans, area);
			}
		}
	}
	std::cout << cnt << "\n" << ans;
	return (0);
}