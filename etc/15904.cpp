#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
string str, ans;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	getline(cin, str);
	for (int i = 0; i < str.length(); i++)
	{
		if (isupper(str[i]))
		{
			ans += str[i];
		}
	}
	string s = "UCPC";
	int j = 0;
	for (int i = 0; i < ans.length(); i++)
	{
		if (j < 4 && ans[i] == s[j])
			j++;
	}
	if (j == 4)
		cout << "I love UCPC";
	else
		cout << "I hate UCPC";
	return (0);
}