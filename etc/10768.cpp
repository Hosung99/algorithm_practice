#include <iostream>

using namespace std;
int n,m;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> n >> m;
	if (n == 2)
	{
		if (m == 18)
			cout << "Special";
		else if (m < 18)
			cout << "Before";
		else
			cout << "After";
	}
	else if (n < 2)
		cout << "Before";
	else
		cout << "After";
	return (0);
}