#include <iostream>
#include <vector>
using namespace std;
int N,temp,board[1001],l,r;
long long ans;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N;
	while (N--)
	{
		int L,H;
		cin >> L >> H;
		if (temp < H)
			temp = H;
		board[L] = H;
	}
	int cur = 0;
	for(int i = 1; i <= 1000; i++)
	{
		if (board[i] == temp)
		{
			l = i;
			break ;
		}
		if (board[i] > cur)
			cur = board[i];
		ans += cur;
	}
	cur = 0;
	for(int i = 1000; i >= 0; i--)
	{
		if (board[i] == temp)
		{
			r = i;
			break;
		}
		if (board[i] > cur)
			cur = board[i];
		ans += cur;
	}
	cout << ans + temp * (r - l + 1);
	return (0);
}