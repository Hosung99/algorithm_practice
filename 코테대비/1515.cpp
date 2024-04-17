#include <iostream>
#include <string>
using namespace std;
string str;
int num,ptr;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> str;
	while(num++ < 30000)
	{
		string temp = to_string(num);
		for(int i = 0; i < temp.length(); i++)
		{
			if (temp[i] == str[ptr])
			{
				ptr++;
			}
			if (ptr == str.length())
			{
				cout << num;
				return (0);
			}
		}
	}
	return (0);
}