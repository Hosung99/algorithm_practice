#include <iostream>

using namespace std;
int tc;
int board[11][11];
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> tc;
	for (int i = 1; i <= tc; i++)
	{
		int N;
		cin >> N;
		int board[11][11] = {
			0,
		};
		int temp = 1;
		int dir = 0, col = 0, row = 0;
		int end_col = N;
		while (temp <= N * N)
		{
			if (dir == 0)
			{
				for (int cnt = 0; cnt < end_col; cnt++)
					board[col][row++] = temp++;
				col++;
				row--;
				end_col--;
			}
			else if (dir == 1)
			{
				for (int cnt = 0; cnt < end_col; cnt++)
					board[col++][row] = temp++;
				col--;
				row--;
			}
			else if (dir == 2)
			{
				for (int cnt = 0; cnt < end_col; cnt++)
					board[col][row--] = temp++;
				row++;
				col--;
				end_col--;
			}
			else
			{
				for (int cnt = 0; cnt < end_col; cnt++)
					board[col--][row] = temp++;
				row++;
				col++;
			}
			dir = (dir + 1) % 4;
		}
		cout << "#" << i << "\n";
		for (int k = 0; k < N; k++)
		{
			for (int l = 0; l < N; l++)
			{
				cout << board[k][l] << " ";
			}
			cout << "\n";
		}
	}
	return (0);
}