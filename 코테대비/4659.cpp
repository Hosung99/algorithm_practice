#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	string str;
	while (1)
	{
		int cnt = 0;
		bool flag = false;
		bool vowel = false;
		bool constant = false;
		bool cnt_3 = false;
		bool cnt_2 = false;
		cin >> str;
		if (str == "end")
			break;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			{
				flag = true;
				cnt++;
				if (vowel)
				{
					if (cnt == 3)
						cnt_3 = true;
				}
				vowel = true;
				if (constant)
				{
					cnt = 1;
					constant = false;
				}
			}
			else
			{
				cnt++;
				if (constant)
				{
					if (cnt == 3)
						cnt_3 = true;
				}
				if (vowel)
				{
					cnt = 1;
					vowel = false;
				}
				constant = true;
			}
			if (i != str.length() - 1)
			{
				if (str[i] == 'e' || str[i] == 'o')
					continue;
				else if (str[i] == str[i + 1])
					cnt_2 = true;
			}
		}
		if (!flag || cnt_3 || cnt_2)
			cout << "<" << str << "> is not acceptable.\n";
		else
			cout << "<" << str << "> is acceptable.\n";
	}
	return (0);
}