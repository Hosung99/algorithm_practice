#include <iostream>
using namespace std;
int X,cnt;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> X;
	while (X)
	{
		if (X % 2 == 1)
			cnt++;
		X /= 2;
	}
	cout << cnt;
	return (0);
}