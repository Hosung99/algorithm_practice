#include <iostream>

using namespace std;
int T;
int board[2][100002], dp[2][100002];
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> T;
	for (int tc = 0; tc < T; tc++)
	{
		int N;
		cin >> N;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < N; j++)
				cin >> board[i][j];
		}
		dp[0][0] = board[0][0];
		dp[1][0] = board[1][0];
		dp[0][1] = dp[1][0] + board[0][1];
		dp[1][1] = dp[0][0] + board[1][1];
		for (int i = 2; i < N; i++)
		{
			dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + board[0][i];
			dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + board[1][i];
		}
		cout << max(dp[0][N - 1], dp[1][N - 1]) << "\n";
	}
	return (0);
}