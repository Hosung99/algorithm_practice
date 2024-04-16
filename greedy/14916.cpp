#include <iostream>

using namespace std;
int n,cnt;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >> n;
	while (n >= 0)
	{
		if (n % 5 == 0)
			n -= 5;
		else if (n % 2 == 0)
			n -= 2;
		else if (n > 5)
			n -= 5;
		else if (n > 2)
			n -= 2;
		else
		{
			cnt = 0;
			break;
		}
		cnt++;
	}
	cout << cnt - 1;
	return (0);
}