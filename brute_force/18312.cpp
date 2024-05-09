#include <iostream>

using namespace std;
int N, K, cnt;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> K;
	for (int hour = 0; hour <= N; hour++)
	{
		string str;
		for (int minute = 0; minute <= 59; minute++)
		{
			for (int second = 0; second <= 59; second++)
			{
				bool flag = false;
				str = to_string(second);
				if (str.size() == 1)
				{
					string temp = str;
					str = "0" + temp;
					if ((str[1] == K + '0' || str[0] == K + '0'))
					{
						cnt++;
						flag = true;
					}
				}
				else if (str.size() == 2 && (str[1] == K + '0' || str[0] == K + '0'))
				{
					cnt++;
					flag = true;
				}
				str = to_string(minute);
				if (str.size() == 1 && !flag)
				{
					string temp = str;
					str = "0" + temp;
					if ((str[1] == K + '0' || str[0] == K + '0'))
					{
						cnt++;
						flag = true;
					}
				}
				else if (str.size() == 2 && (str[1] == K + '0' || str[0] == K + '0') && !flag)
				{
					cnt++;
					flag = true;
				}
				str = to_string(hour);
				if (str.size() == 1 && !flag)
				{
					string temp = str;
					str = "0" + temp;
					if ((str[1] == K + '0' || str[0] == K + '0'))
						cnt++;
				}
				else if (str.size() == 2 && (str[1] == K + '0' || str[0] == K + '0') && !flag)
					cnt++;
			}
		}
	}
	cout << cnt;
	return (0);
}