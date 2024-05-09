#include <iostream>

using namespace std;
int T;
int board[9][9];
void insert()
{
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
			cin >> board[i][j];
	}
}

int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> T;
	for(int i = 1; i <= T; i++)
	{
		bool flag = true;
		insert();
		for(int i = 0; i < 9; i++)
		{
			int temp[10] = {0, };
			for(int j = 0; j < 9; j++)
				temp[board[i][j]]++;
			for(int j = 1; j <= 9; j++)
			{
				if (temp[j] > 1)
					flag = false;
			}
		}
 		for(int i = 0; i < 9; i++)
		{
			int temp2[10] = {0, };
			for(int j = 0; j < 9; j++)
				temp2[board[j][i]]++;
			for(int j = 1; j <= 9; j++)
			{
				if (temp2[j] > 1)
					flag = false;
			}
		}
		for(int i = 0; i < 9; i += 3)
		{
			int temp3[10] = {0, };
			for(int k = i; k < i + 3; k++)
			{
				for(int j = i; j < i + 3; j++)
					temp3[board[k][j]]++;
			}
			for(int j = 1; j <= 9; j++)
			{
				if (temp3[j] > 1)
					flag = false;
			}
		}
		cout << "#" << i << " " << flag << "\n";
	}
	return (0);
}