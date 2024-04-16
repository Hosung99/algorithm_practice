#include <iostream>
using namespace std;
int T;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> T;
	int N, M, x, y;
	while (T--)
	{
		int temp_x = 1;
		int temp_y = 1;
		int cnt = 1;
		int t_x;
		int t_y;
		cin >> M >> N >> x >> y;
		if (x > y)
		{
			t_x = x - y + 1;
			t_y = 1;
		}
		else
		{
			t_x = 1;
			t_y = y - x + 1;
		}
		cout << t_x << " " << t_y << "\n";
		while (1)
		{
			cout << temp_x << " " << temp_y << "\n";
			if (temp_x == t_x && temp_y == t_y)
			{
				cnt += x - t_x;
				temp_x = x;
				temp_y = y;
				break;
			}
			else if (M - temp_x < N - temp_y)
			{
				cnt += M - temp_x + 1;
				temp_y += M - temp_x + 1;
				temp_x = 1;
			}
			else if (M - temp_x > N - temp_y)
			{
				cnt += N - temp_y + 1;
				temp_x += N - temp_y + 1;
				temp_y = 1;
			}
			else
			{
				cnt += N - temp_y;
				temp_x = M;
				temp_y = N;
				break;
			}
		}
		if (temp_x == x && temp_y == y)
			cout << cnt << "\n";
		else
			cout << "-1\n";
	}
	return (0);
}