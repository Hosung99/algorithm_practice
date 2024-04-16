#include <iostream>

using namespace std;
string s;
int ans;
int arr[26];
int main()
{
	cin >> s;
	for(int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			arr[s[i] - 97]++;
		else
			arr[s[i] - 65]++;
	}
	for(int i = 0; i < 26; i++)
	{
		if (arr[i] != 0 && ans < arr[i])
			ans = arr[i];
	}
	char c;
	int cnt_ans = 0;
	for(int i = 0; i < 26; i++)
	{
		if (arr[i] == ans)
		{
			c = 65 + i;
			cnt_ans++;
		}
	}
	if (cnt_ans > 1)
		cout << "?";
	else
		cout << c;
	return (0);
}