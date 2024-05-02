#include <iostream>

using namespace std;
int zero_cnt,one_cnt;
string str;
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> str;
	string temp = "", temp2 = "";
	int cnt = -1;
	for(int i = 0; i < str.length(); i++)
	{
		if (str[i] == '0')
			zero_cnt++;
		else
			one_cnt++;
	}
	for(int i = 0; i < str.length(); i++)
	{
		if (str[i] == '1')
			cnt++;
		if (str[i] == '1' && cnt < one_cnt / 2)
			continue;
		temp += str[i];
	}
	cnt = -1;
	for(int i = temp.length() - 1; i >= 0; i--)
	{
		if (temp[i] == '0')
			cnt++;
		if (temp[i] == '0' && cnt < zero_cnt / 2)
			continue;
		temp2 += temp[i];
	}
	for(int i = temp2.length() - 1; i >= 0; i--)
		cout << temp2[i];
	return (0);
}