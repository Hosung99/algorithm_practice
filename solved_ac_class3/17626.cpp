#include <iostream>
#include <math.h>
using namespace std;
int n;
int board[50001];
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> n;
	board[1] = 1;
	board[2] = 2;
	board[3] = 3;
	for(int i = 4; i <= 50000; i++)
	{
		int mn = 2147483647;
		for(int j = 1; j * j <= i; j++)
		{
			int temp  = i - j * j;
			mn = min(mn, board[temp]);
		}
		board[i] = mn + 1;
	}
	cout << board[n];
	return (0);
}