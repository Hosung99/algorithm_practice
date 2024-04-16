#include <iostream>

using namespace std;
string s;
int ans;
int main()
{
	getline(cin,s);
	for(int i = 0; i < s.length(); i++)
	{
		if (i != 0 && i != s.length()-1 && s[i] == ' ')
			ans++;
	}
	for(int i = 0; i < s.length();i ++)
	{
		if (s[i] != ' ')
		{
			ans++;
			break ;
		}
	}
	cout << ans;
	return (0);
}