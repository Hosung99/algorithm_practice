#include <iostream>

using namespace std;
int A,T,bbun,daegi;
bool b;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> A >> T >> b;
	int n = 2;
	while (1)
	{
		for(int i = 0; i < 4; i++)
		{
			if (i % 2 == 0)
				bbun++;
			else
				daegi++;
			if (bbun == T && !b)
			{
				cout << (bbun + daegi - 1) % A;
				return (0);
			}
			if (daegi == T && b)
			{
				cout << (bbun + daegi - 1) % A;
				return (0);
			}
		}
		for(int i = 0; i < n; i++)
		{
			bbun++;
			if (bbun == T && !b)
			{
				cout << (bbun + daegi - 1) % A;
				return (0);
			}
		}
		for(int i = 0; i < n; i++)
		{
			daegi++;
			if (daegi == T && b)
			{
				cout << (bbun + daegi - 1) % A;
				return (0);
			}
		}
		n++;
	}
	return (0);
}