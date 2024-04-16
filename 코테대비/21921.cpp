#include <iostream>

using namespace std;
int N, X, cnt;
int board[250001];
int pSum[250001];
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> X;
	for (int i = 1; i <= N; i++)
	{
		cin >> board[i];
		pSum[i] = pSum[i - 1] + board[i];
	}
	long long sum = pSum[X - 1];
	for (int i = X; i <= N; i++)
	{
		long long temp = pSum[i] - pSum[i - X];
		if (sum < temp)
		{
			sum = temp;
			cnt = 1;
		}
		else if (sum == temp)
			cnt++;
	}
	if (sum == 0)
	{
		cout << "SAD";
		return (0);
	}
	cout << sum << "\n";
	cout << cnt;
	return (0);
}