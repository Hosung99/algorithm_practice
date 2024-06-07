#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int N, M;
vector<int> v;
vector<int> vec;
set<vector<int>> s;
bool visited[8];
void dfs(int depth)
{
	if (depth == M)
	{
		s.insert(vec);
		return;
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			vec.push_back(v[i]);
			dfs(depth + 1);
			vec.pop_back();
			visited[i] = false;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());
	dfs(0);
	for (auto i : s)
	{
		for (auto j : i)
			cout << j << ' ';
		cout << '\n';
	}
	return (0);
}