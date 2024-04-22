#include <iostream>
#include <tuple>
#include <queue>
using namespace std;
int N, M, ans=2147483647;
int board[6][6];
int dx[3] = {-1, 0, 1};
int dp(int x, int y, int dir)
{
	if (x == N)
		return (0);
	int temp = 2147483647;
	for (int i = 0; i < 3; i++)
	{
		if (dir == i)
			continue;
		if (y + dx[i] < 0 || y + dx[i] >= M)
			continue;
		temp = min(temp, dp(x + 1, y + dx[i], i) + board[x][y]);
	}
	return temp;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cin >> board[i][j];
	}
	for (int i = 0; i < M; i++)
		ans = min(ans, dp(0, i, -1));
	cout << ans;
	return (0);
}