#include <iostream>

using namespace std;
int N;
unsigned long long int ans;
unsigned long long int board[100001];
unsigned long long int dist[100001];
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> N;
	for (int i = 0; i < N - 1; i++)
		cin >> board[i];
	for (int i = 0; i < N; i++)
		cin >> dist[i];
	long long int mn = 2147483647;
	for(int i = 0; i < N - 1; i++)
	{
		if (dist[i] < mn)
			mn = dist[i];
		ans += mn * board[i];
	}
	cout << ans;
	return (0);
}