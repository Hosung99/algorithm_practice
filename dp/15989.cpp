#include <iostream>

using namespace std;
int n;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> n;
	while(n--)
	{
		int input;
		cin >> input;
		int dp[10001][4] = {0, };
		dp[1][1] = 1;
		dp[2][1] = 1, dp[2][2] = 1;
		dp[3][1] = 1, dp[3][2] = 1, dp[3][3] = 1;
		for(int i = 4; i <= input; i++)
		{
			dp[i][1] = dp[i-1][1];
			dp[i][2] = dp[i-2][1] + dp[i-2][2];
			dp[i][3] = dp[i-3][1] + dp[i-3][2] + dp[i-3][3];
		}
		cout << dp[input][1] + dp[input][2] + dp[input][3] << '\n';
	}
	return (0);
}