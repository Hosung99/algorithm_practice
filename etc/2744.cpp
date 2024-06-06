#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	string str,ans;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ans += toupper(str[i]);
		else
			ans += tolower(str[i]);
	}
	cout << ans;
	return (0);
}