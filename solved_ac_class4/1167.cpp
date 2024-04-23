#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int V, temp, ans, selected;
bool visited[100001];
vector<pair<int, int >> vec[100001];
void dfs(int x, int cnt)
{
	if (ans < cnt)
	{
		selected = x;
		ans = cnt;
	}
	for(int i = 0; i < vec[x].size(); i++)
	{
		int nx = vec[x][i].first;
		int ny = vec[x][i].second;
		if (!visited[nx])
		{
			visited[nx] = true;
			dfs(nx, cnt + ny);
			visited[nx] = false;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> V;
	temp = V;
	while (V--)
	{
		int number;
		cin >> number;
		while (1)
		{
			int c,e;
			cin >> c;
			if (c == -1)
				break;
			cin >> e;
			vec[number].push_back({c, e});
		}
	}
	visited[1] = true;
	dfs(1, 0);
	memset(visited, 0, sizeof(visited));
	visited[selected] = true;
	ans = 0;
	dfs(selected, 0);
	cout << ans;
	return (0);
}
