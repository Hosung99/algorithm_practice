#include <iostream>

using namespace std;
int N;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> N;
	bool flag = true;
	while (N >= 0)
	{
		if (N >= 3)
		{
			N -= 3;
			if (flag)
				flag = false;
			else
				flag = true;
		}
		else
		{
			N -= 1;
			if (flag)
				flag = false;
			else
				flag = true;
		}
	}
	if (flag)
		cout << "SK";
	else
		cout << "CY";
	return (0);
}