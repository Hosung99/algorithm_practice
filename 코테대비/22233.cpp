#include <iostream>
#include <map>
#include <sstream>
using namespace std;
int N, M;
map<string, bool> m;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		string input;
		cin >> input;
		m[input] = true;
	}
	int cnt = 0;
	for (int i = 0; i < M; i++)
	{
		string input;
		cin >> input;
		string str;
		stringstream ss(input);
		while (getline(ss, str, ','))
		{
			if (m.find(str) != m.end())
			{
				m.erase(str);
				cnt++;
			}
		}
		cout << N - cnt << "\n";
	}
	return (0);
}