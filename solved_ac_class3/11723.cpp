#include <iostream>
#include <map>
#include <string>
using namespace std;
map<int, bool> m;
int M;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);
	cin >> M;
	string temp;
	for (int i = 0; i < M; i++)
	{
		int a;
		cin >> temp;
		if (temp.find("add") != string::npos)
		{
			cin >> a;
			if (!m[a])
				m[a] = true;
		}
		else if (temp.find("check") != string::npos)
		{
			cin >> a;
			if (m[a])
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (temp.find("remove") != string::npos)
		{
			cin >> a;
			if (m[a])
				m[a] = false;
		}
		else if (temp.find("toggle") != string::npos)
		{
			cin >> a;
			if (m[a])
				m[a] = false;
			else
				m[a] = true;
		}
		else if (temp.find("all") != string::npos)
		{
			for (int j = 1; j <= 20; j++)
				m[j] = true;
		}
		else if (temp.find("empty") != string::npos)
		{
			for (int j = 1; j <= 20; j++)
				m[j] = false;
		}
	}
	return (0);
}