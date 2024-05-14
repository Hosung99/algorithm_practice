#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	for (int i = 1; i <= 10; i++)
	{
		int N;
		int board[101][101];
		int cnt = 0;
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
				cin >> board[i][j];
		}
		for (int i = 0; i < N; i++)
		{
			bool flag = false;
			for (int j = 0; j < N; j++)
			{
				if (board[j][i] == 1)
					flag = true;
				else if (board[j][i] == 2 && flag)
				{
					cnt++;
					flag = false;
				}
			}
		}
		cout << "#" << i << " " << cnt << "\n";
	}
	return (0);
}