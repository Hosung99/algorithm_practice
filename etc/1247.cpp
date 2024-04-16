#include <iostream>

using namespace std;
long long ans;
int main()
{
	int input;
	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		long long temp;
		ans = 0;
		int flow = 0;
		for (int j = 0; j < input; j++)
		{
			cin >> temp;
			long long prev = ans;
			ans += temp;
			if (temp > 0 && prev > 0 && ans < 0)
				flow++;
			if (temp < 0 && prev < 0 && ans > 0)
				flow--;
		}
		if (flow == 0)
		{
			if (ans == 0)
				cout << "0\n";
			else if (ans > 0)
				cout << "+\n";
			else
				cout << "-\n";
		}
		else
		{
			if (flow > 0)
				cout << "+\n";
			else
				cout << "-\n";
		}
	}
	return (0);
}