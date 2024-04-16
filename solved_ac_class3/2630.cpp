#include <iostream>

using namespace std;
int N, b_cnt, w_cnt;
int board[128][128];

bool check_paper(int x, int y, int n)
{
	int temp = board[x][y];
	for (int i = x; i < x + n; i++)
	{
		for (int j = y; j < y + n; j++)
		{
			if (board[i][j] != temp)
				return (true);
		}
	}
	return (false);
}

void solve(int x, int y, int n)
{
	bool flag = check_paper(x, y, n);
	int first_color = board[x][y];
	if (flag)
	{
		solve(x, y, n / 2);
		solve(x, y + n / 2, n / 2);
		solve(x + n / 2, y, n / 2);
		solve(x + n / 2, y + n / 2, n / 2);
	}
	else
	{
		if (first_color)
			b_cnt++;
		else
			w_cnt++;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cin >> board[i][j];
	}
	solve(0, 0, N);
	cout << w_cnt << "\n" << b_cnt;
	return (0);
}