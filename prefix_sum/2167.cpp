#include <iostream>
using namespace std;
int N, M, K, board[301][301];
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			cin >> board[i][j];
			board[i][j] += board[i][j - 1] + board[i - 1][j] - board[i - 1][j - 1];
		}
	}
	cin >> K;
	while (K--)
	{
		int i, j, x, y;
		cin >> i >> j >> x >> y;
		cout << board[x][y] - board[i - 1][y] - board[x][j - 1] + board[i - 1][j - 1] << "\n";
	}
	return (0);
}