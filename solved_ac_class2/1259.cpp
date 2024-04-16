#include <iostream>

using namespace std;
string s;
int main()
{
	while(1)
	{
		cin >> s;
		if (s == "0")
			break ;
		int len = s.length() - 1;
		for(int i = 0; i < s.length() / 2; i++)
		{
			if (s[i] != s[len--])
			{
				cout << "no\n";
				break ;
			}
			if (i == s.length() / 2 - 1)
				cout << "yes\n";
		}
		if (s.length() == 1)
			cout << "yes\n";
	}
	return (0);
}