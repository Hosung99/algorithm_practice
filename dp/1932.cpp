#include <iostream>

using namespace std;
int temp,n,board[501][501],ans[501][501];
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			cin >> board[i][j];
		}
	}
	ans[0][0] = board[0][0];
	for(int i = 1; i < n; i++)
	{
		for(int j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				ans[i][j] = ans[i - 1][j] + board[i][j];
			}
			else if (j == n)
			{
				ans[i][j] = ans[i - 1][j - 1] + board[i][j];
			}
			else
			{
				ans[i][j] = max(ans[i - 1][j], ans[i - 1][j - 1]) + board[i][j];
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		temp = max(temp,ans[n - 1][i]);
	}
	cout << temp;
	return (0);
}
