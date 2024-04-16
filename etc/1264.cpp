#include <iostream>

using namespace std;

int main()
{
	string s;
	while (1)
	{
		int cnt = 0;
		getline(cin, s);
		if (s == "#")
			break;
		for (int i = 0; i < s.length(); i++)
		{
			s[i] = toupper(s[i]);
			if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
				cnt++;
		}
		cout << cnt << "\n";
	}
	return (0);
}