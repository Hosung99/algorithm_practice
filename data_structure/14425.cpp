#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int N, M, ans;
string str;
set<string> s;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		s.insert(str);
	}
	for (int i = 0; i < M; i++)
	{
		cin >> str;
		if (s.find(str) != s.end())
			ans++;
	}
	cout << ans;
	return (0);
}