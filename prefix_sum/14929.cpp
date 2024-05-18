#include <iostream>
using namespace std;
int N;
long long ans;
long long board[100001];
long long arr[100001];
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> N;
	for(int i = 1; i <= N; i++)
	{
		int input;
		cin >> input;
		board[i] = input;
		arr[i] = arr[i - 1] + board[i];
	}
	for(int i = 2; i <= N; i++)
		ans += board[i] * arr[i - 1];
	cout << ans;
	return (0);
}