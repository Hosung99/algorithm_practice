#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
map<int, string> m;
map<string, int> m2;
int N, M;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> N >> M;
	string str;
	for (int i = 1; i <= N; i++)
	{
		cin >> str;
		m[i] = str;
		m2[str] = i;
	}
	for (int i = 0; i < M; i++)
	{
		string str;
		cin >> str;
		bool flag = false;
		for (int j = 0; j < str.length(); j++)
		{
			if (!isdigit(str[j]))
				flag = true;
		}
		if (flag)
		{
			cout << m2[str] << "\n";
		}
		else
		{
			cout << m[atoi(str.c_str())] << "\n";
		}
	}
	return (0);
}