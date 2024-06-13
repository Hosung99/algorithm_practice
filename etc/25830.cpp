#include <iostream>

using namespace std;
string str, ans;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> str;
	int ans_hour, ans_minute, ans_second, str_minute, str_second;
	ans_hour = (str[0] - '0') * 10 + (str[1] - '0');
	ans_minute = (str[3] - '0') * 10 + (str[4] - '0');
	ans_second = 0;
	str_minute = ans_hour;
	str_second = ans_minute;
	if (ans_second < str_second)
	{
		ans_second = 60 - str_second;
		ans_minute--;
	}
	if (ans_minute < str_minute)
	{
		ans_minute += 60;
		if (ans_hour > 0)
			ans_hour--;
	}
	ans_minute -= str_minute;
	if (ans_hour < 10)
		cout << "0" << ans_hour << ":";
	else
		cout << ans_hour << ":";
	if (ans_minute < 10)
		cout << "0" << ans_minute << ":";
	else
		cout << ans_minute << ":";
	if (ans_second < 10)
		cout << "0" << ans_second;
	else
		cout << ans_second;
	return (0);
}