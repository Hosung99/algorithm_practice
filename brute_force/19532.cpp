#include <iostream>

using namespace std;
long long a, b, c, d, e, f, x, y;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> a >> b >> c >> d >> e >> f;
	for (int i = -999; i <= 999; i++)
	{
		for (int j = -999; j <= 999; j++)
		{
			long long t1 = a * i;
			long long t2 = b * j;
			if (t1 + t2 == c)
			{
				long long t3 = d * i;
				long long t4 = e * j;
				if (t3 + t4 == f)
				{
					cout << i << " " << j;
					return (0);
				}
			}
		}
	}
	return (0);
}