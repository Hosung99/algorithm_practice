#include <iostream>

using namespace std;
int T;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		int tc;
		int board[101] = {
			0,
		};
		cin >> tc;
		for (int j = 0; j < 10; j++)
		{
			int input;
			cin >> input;
			board[input]++;
		}
		int cnt = 0,ans=0;
		for (int j = 1; j <= 100; j++)
		{
			if (cnt <= board[j])
			{
				cnt = board[j];
				ans = j;
			}
		}
		cout << "#" << tc << " " << ans << "\n";
	}
	return (0);
}