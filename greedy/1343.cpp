#include <iostream>
#include <vector>
using namespace std;
vector<string> vec;
string str;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> str;
	int index = 0;
	while (index < str.length())
	{
		if (str[index] == 'X')
		{
			int temp = index;
			while (temp < str.length() && str[temp] != '.')
				temp++;
			int temp_2 = temp - index;
			while (temp_2 > 0)
			{
				if (temp_2 >= 4)
				{
					temp_2 -= 4;
					vec.push_back("AAAA");
				}
				else if (temp_2 % 2 == 0)
				{
					temp_2 -= 2;
					vec.push_back("BB");
				}
				else
				{
					vec.clear();
					vec.push_back("-1");
					break;
				}
			}
			index = temp;
		}
		else
		{
			index++;
			vec.push_back(".");
		}
	}
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i];
		if (vec[i] == "-1")
			break ;
	}
	return (0);
}