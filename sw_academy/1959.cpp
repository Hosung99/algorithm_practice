#include <iostream>

using namespace std;
int T;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> T;
	for(int tc = 1; tc <= T; tc++)
	{
		int A,B;
		int sum = 0;
		cin >> A >> B;
		int board_a[21] = {0, };
		int board_b[21] = {0, };
		for(int i = 0; i < A; i++)
			cin >> board_a[i];
		for(int i = 0; i < B; i++)
			cin >> board_b[i];
		if (A < B)
		{
			for(int i = 0; i <= B - A; i++)
			{
				int temp = 0;
				for(int j = 0; j < A; j++)
				{
					temp += board_a[j] * board_b[j + i];
				}
				sum = max(sum, temp);
			}
		}
		else
		{
			for(int i = 0; i <= A - B; i++)
			{
				int temp = 0;
				for(int j = 0; j < B; j++)
				{
					temp += board_b[j] * board_a[j + i];
				}
				sum = max(sum, temp);
			}
		}
		cout << "#" << tc << " " << sum << "\n";
	}
	return (0);
}