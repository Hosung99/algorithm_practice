#include <iostream>
#include <map>

using namespace std;
map<string, int> m;
int T;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	string wear, type;
	int ans, n;
	cin >> T;
	while (T--)
	{
		ans = 1;
		m.clear();
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> wear >> type;
			m[type]++;
		}
		for (auto it = m.begin(); it != m.end(); it++)
			ans *= (it->second + 1);
		cout << ans - 1 << "\n";
	}
	return (0);
}