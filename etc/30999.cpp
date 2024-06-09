#include <iostream>

using namespace std;
int N, M, ans;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> M;
	int mid = M / 2 + 1;
	for (int i = 0; i < N; i++)
	{
		int cnt = 0;
		string input;
		cin >> input;
		for (int j = 0; j < input.length(); j++)
		{
			if (input[j] == 'O')
				cnt++;
		}
		if (cnt >= mid)
			ans++;
	}
	cout << ans;
	return (0);
}