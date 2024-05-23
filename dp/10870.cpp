#include <iostream>

using namespace std;
int n;
int board[22];
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	board[0] = 0;
	board[1] = 1;
	board[2] = 1;
	for (int i = 3; i <= 21; i++)
	{
		board[i] = board[i - 1] + board[i - 2];
	}
	cout << board[n];
	return (0);
}