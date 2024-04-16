#include <iostream>
#include <string>
using namespace std;
string str;
bool flag;
long long ans;
int main()
{
	cin >> str;
	string temp = "";
	for (int i = 0; i <= str.length(); i++)
	{
		if (str[i] == '+' || str[i] == '-' || i == str.length())
		{
			if (flag)
			{
				ans -= stoi(temp);
				temp = "";
			}
			else
			{
				ans += stoi(temp);
				temp = "";
			}
		}
		else
			temp += str[i];
		if (str[i] == '-')
			flag = true;
	}
	cout << ans;
	return (0);
}