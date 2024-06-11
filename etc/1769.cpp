#include <iostream>

using namespace std;
int cnt;
string str;
bool flag;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> str;
	if (str.size() == 1)
	{
		if (str[0] == '3' || str[0] == '6' || str[0] == '9')
		{
			cout << "0\nYES";
			return (0);
		}
		else
		{
			cout << "0\nNO";
			return (0);
		}
	}
	while (1)
	{
		cnt++;
		int sum = 0;
		for (int i = 0; i < str.size(); i++)
		{
			sum += str[i] - '0';
		}
		str = to_string(sum);
		if (sum < 10)
		{
			if (sum == 3 || sum == 6 || sum == 9)
				flag = true;
			break;
		}
	}
	cout << cnt << "\n";
	if (flag)
		cout << "YES";
	else
		cout << "NO";
	return (0);
}