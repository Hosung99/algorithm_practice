#include <iostream>

using namespace std;
int A,B,C,M,p,ans;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> A >> B >> C >> M;
	for(int i = 0; i < 24; i++)
	{
		if (p + A <= M)
		{
			p += A;
			ans += B;
		}
		else
		{
			p -= C;
			if (p < 0)
				p = 0;
		}
	}
	cout << ans;
	return (0);
}