#include <iostream>
#include <cmath>
using namespace std;
int N,C,R;
int ans;
void	solve(int x, int y, int value)
{
	if (x == C && y == R)
	{
		cout << ans;
		return ;
	}
	else if (C < x + value && R < y + value && C >= x && R >= y)
	{
		solve(x, y, value / 2);
		solve(x + value / 2, y , value / 2);
		solve(x, y + value / 2, value /2);
		solve(x + value / 2, y + value / 2, value / 2);
	}
	else
		ans += value * value;
}

int main()
{
	cin >> N >> R >> C;
	solve(0,0,pow(2,N));
	return (0);
}