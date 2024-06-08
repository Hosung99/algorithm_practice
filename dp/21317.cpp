#include <iostream>

using namespace std;
int N, K;
int dp[21][2];
pair<int, int> vec[21];
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N;
	for (int i = 1; i < N; i++)
	{
		int s_jump, b_jump;
		cin >> s_jump >> b_jump;
		vec[i] = {s_jump, b_jump};
	}
	cin >> K;
	for (int i = 0; i <= 20; i++)
	{
		dp[i][0] = 9999999;
		dp[i][1] = 9999999;
	}
	dp[1][0] = 0;
	dp[2][0] = vec[1].first;
	dp[3][0] = min(vec[1].first + vec[2].first, vec[1].second);
	for (int i = 4; i <= N; i++)
	{
		dp[i][0] = min(vec[i - 1].first + dp[i - 1][0], vec[i - 2].second + dp[i - 2][0]);
		dp[i][1] = min(vec[i - 1].first + dp[i - 1][1], vec[i - 2].second + dp[i - 2][1]);
		dp[i][1] = min(dp[i][1], K + dp[i - 3][0]);
	}
	cout << min(dp[N][0], dp[N][1]);
	return (0);
}