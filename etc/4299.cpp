#include <iostream>

using namespace std;
int sum,m;
int main()
{
	cin >> sum >> m;
	for(int i = 0; i <= 1000; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i + j == sum && i - j == m)
			{
				cout << i << " " << j;
				return (0);
			}
		}
	}
	cout << "-1";
	return (0);
}